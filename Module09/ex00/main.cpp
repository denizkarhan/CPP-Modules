/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:38:15 by dkarhan           #+#    #+#             */
/*   Updated: 2023/03/18 14:38:15 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Input file için tarih ve btc sayısını, Database için tarih ve btc değerini tokenize ediyor
std::list<std::string> dateParsing(std::string date)
{
    std::list<std::string> dateTokens;
    std::list<std::string>::iterator it;
    std::string tempDate;
    int i = -1;

    while (++i < date.length())
    {
        if ((date[i] && (date[i] == '|' || date[i] == ',')) || (i + 1 == date.length()))
        {
            dateTokens.push_back(tempDate);
            break;
        }
        else if (date[i] && date[i] != '-')
        {
            if ((date[i] >= '0' && date[i] <= '9'))
                tempDate += date[i];
        }
        else
        {
            dateTokens.push_back(tempDate);
            tempDate.clear();
        }
    }
    tempDate.clear();
    while (++i < date.length())
        if ((date[i] >= '0' && date[i] <= '9') || date[i] == '.' || date[i] == '-')
           tempDate += date[i];
    dateTokens.push_back(tempDate);
    return (dateTokens);
}

// Input dosyasındaki tarih ve btc sayısı değerleri geçerli mi kontrolü
float    inputLineChecker(std::string line)
{
    std::list<std::string>  dateTokens = dateParsing(line);
    std::string tokens[4];
    int i = 0;

    for (std::list<std::string>::iterator it = dateTokens.begin(); it != dateTokens.end(); ++it) {
        tokens[i++] = *it;
    }
    if (!(std::stoi(tokens[0]) >= 2009 && (std::stoi(tokens[1]) >= 1 && std::stoi(tokens[1]) <= 12) && (std::stoi(tokens[2]) >= 1 && std::stoi(tokens[2]) <= 31)))
    {
        std::cout << "Error: bad input => " << tokens[0] << "-" << tokens[1] << "-" << tokens[2] << std::endl;
        return (0);
    }
    else if (!(tokens[3].length() > 0 && std::stof(tokens[3]) > 0))
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (0);
    }
    else if (std::stof(tokens[3]) > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (0);
    }
    std::cout << tokens[0] << "-" << tokens[1] << "-" << tokens[2] << " => " << std::stof(tokens[3]) <<  " = ";
    return (std::stof(tokens[3]));
}

// Input dosyasındaki ve databasedeki verilerin ilk karşılaştığı noktayı tarih kontrolü
int    is_match(std::string input[], std::string dataBase[])
{
    if (std::stoi(input[0]) <= std::stoi(dataBase[0]) &&
        std::stoi(input[1]) <= std::stoi(dataBase[1]) &&
        std::stoi(input[2]) <= std::stoi(dataBase[2]))
    {
        if (std::stoi(input[0]) == std::stoi(dataBase[0]) &&
            std::stoi(input[1]) == std::stoi(dataBase[1]) &&
            std::stoi(input[2]) == std::stoi(dataBase[2])){
                return (2);
            }
        return (1);
    }
    return (0);
}

// Input ile gelen tarihi veritabanında arıyorum, bulduğum tarihin btc değerini dönderiyorum
float   lineFindDatabase(std::string inputDate, BitcoinExchange *btc)
{
    std::list<std::string>  input = dateParsing(inputDate);
    std::list<std::string>  dataBaseDate;
    std::string inputTokens[4];
    std::string dateTokens[4];
    std::string valueTemp;
    int i = 0;
    int match = 0;

    for (std::list<std::string>::iterator it = input.begin(); it != input.end(); ++it)
            inputTokens[i++] = *it;

    for (std::list<std::string>::iterator it = btc->btc_data.begin(); it != btc->btc_data.end(); ++it) {
        dataBaseDate = dateParsing(*it);
        i = 0;
        for (std::list<std::string>::iterator it = dataBaseDate.begin(); it != dataBaseDate.end(); ++it)
            dateTokens[i++] = *it;
        match = is_match(inputTokens, dateTokens);
        if (is_match(inputTokens, dateTokens) != 0)
        {
            if (match == 1)
                return (std::stof(valueTemp));
            else
                return (std::stof(dateTokens[3]));
        }
        valueTemp = dateTokens[3];
        dateTokens->clear();
    }
    return (0);
}

// Aranan tarihdeki btc değerini buluyor
void    inputFileRead(std::string const &inputFile, BitcoinExchange *btc)
{
    std::ifstream file(inputFile);
    std::string line;
    float flag;

    if (file.is_open())
    {
        getline(file, line);
        while (getline(file, line))
        {
            flag = inputLineChecker(line);
            if (flag)
                std::cout << flag * lineFindDatabase(line, btc) << std::endl;
        }
        file.close();
    }
    else
        std::cout << "file could not be opened!" << std::endl;
}

int main(int argc, char **argv)
{
    BitcoinExchange btc("data.csv");
    btc.dataAdderToList();
    if (argc == 2)
        inputFileRead(argv[1], &btc);
    else
        std::cout << "Error: could not open file." << std::endl;
}
