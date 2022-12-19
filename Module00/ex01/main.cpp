#include "phone.hpp"

void    add_directory(PhoneBook *persons)
{
    std::cout << "Informations of persons\n";
    std::cout << "Name: ";
    std::cin >> persons->person[persons->idx % 8].name;
    std::cout << "Surname: ";
    std::cin >> persons->person[persons->idx % 8].surname;
    std::cout << "Nick Name: ";
    std::cin >> persons->person[persons->idx % 8].nick;
    std::cout << "Phone Number: ";
    std::cin >> persons->person[persons->idx % 8].phone;  
    std::cout << "Secret info: ";
    std::cin >> persons->person[persons->idx % 8].secret;
    std::cout << std::endl;
    persons->idx++;
}

int     ft_strlen(std::string str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    write_person_info(std::string str)
{
    int len;
    int len_string;

    len_string = ft_strlen(str);
    len = -1;
    if (len_string <= 10)
    {
        len = 10 - len_string;
        while (len-- > 0)
            std::cout << ' ';
        std::cout << str;
    }
    else
    {
        while (++len <= 8)
            std::cout << str[len];
        std::cout << ".";
    }
    std::cout << "|";
}

int    int_i(std::string str)
{
    int a = -1;

    while (str[++a])
        if (str[a] > '9' || str[a] < '0')
            return (0);
    return (1);
}

int input_to_int(std::string input)
{
    int i = 0;
    int j = -1;

    while (input[++j])
        i = (i * 10) + (input[j] - 48);
    return (i);
}

void    search_person(PhoneBook *persons)
{
    int             i;
    std::string     input;

    i = 0;
    std::cout << "           Information display screen\n";
    if (!persons->idx)
    {
        std::cout << "none" << std::endl;
        return ;
    }
    while (i < persons->idx && i < 8)
    {
        std::cout << "  Person " << i + 1 << "|";
        write_person_info(persons->person[i].name);
        write_person_info(persons->person[i].surname);
        write_person_info(persons->person[i++].nick);
        std::cout << std::endl;
    }
    std::cout << "Enter person number: ";
    std::cin >> input;
    if (!int_i(input))
    {
        std::cout << "Wrong! your number is not integer number\n";
        return ;
    }
    i = input_to_int(input);
    if(i >= 1 && i <= 8 && i <= persons->idx)
    {
        std::cout << "name:    " << persons->person[i - 1].name << std::endl;
        std::cout << "surname: " << persons->person[i - 1].surname << std::endl;
        std::cout << "nick:    " << persons->person[i - 1].nick << std::endl;
        std::cout << "phone:   " << persons->person[i - 1].phone << std::endl;
        std::cout << "info:    " << persons->person[i - 1].secret << std::endl << std::endl;
    }
    else
        std::cout << "Wrong! your number is not between 1-8 or contact not found\n";
}

void    exit_program()
{
    std::cout << "Program finished.\n";
    exit(EXIT_SUCCESS);
}

int main(void)
{     
    PhoneBook   persons;
    std::string c;

    persons.idx = 0;
    while (1)
    {
        std::cout << "Enter: ";
        std::cin >> c;
        if (c == "ADD")
            add_directory(&persons);
        else if (c == "SEARCH")
            search_person(&persons);
        else if (c == "EXIT")
            exit_program();
    }
}
