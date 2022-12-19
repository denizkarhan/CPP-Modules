#ifndef PHONE_HPP
# define PHONE_HPP

#include <iostream>

class   contact
{
public:
    std::string name;
    std::string surname;
    std::string nick;
    std::string phone;
    std::string secret;
};

class   PhoneBook
{
public:
    contact person[8];
    int idx;
};

#endif
