/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <dkarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:38:26 by dkarhan           #+#    #+#             */
/*   Updated: 2023/03/18 14:38:26 by dkarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { }
BitcoinExchange::BitcoinExchange(std::string const &fileName) { this->fileName = fileName; }
BitcoinExchange::BitcoinExchange(BitcoinExchange const &btc) { *this = btc; }
BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &btc) { this->fileName = btc.getFileName(); return (*this); }
BitcoinExchange::~BitcoinExchange() { btc_data.erase(btc_data.begin(), btc_data.end()); }

std::string const &BitcoinExchange::getFileName() const { return (this->fileName); }

void    BitcoinExchange::dataAdderToList()
{
    std::string filename = this->fileName;
    std::string line;
    std::ifstream file(filename);

    if (file.is_open())
    {
        getline(file, line);
        while (getline(file, line))
        {
            this->btc_data.push_back(line);
        }
        file.close();
    }
    else
    {
        std::cout << "file could not be opened!" << std::endl;
    }
}
