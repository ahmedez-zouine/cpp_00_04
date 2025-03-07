#include "PhoneBook.hpp"

int PhoneBook::_i = 0;

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void PhoneBook::addContact(void)
{
    PhoneBook::book[this->_i % 8].Addfone((this->_i % 8) + 1);
    this->_i++;
}

void ft_print_string(std::string str)
{
    if (str.length() < 10)
    {
        std::cout << str;
        for (int i = 10 - str.length(); i; i--)
            std::cout << " ";
    }
    else
        std::cout << str.substr(0, 9) << ".";
}


void PhoneBook::Search(void) const
{
    int i = 0;

    std::cout << "++++++++++|++++++++++|++++++++++|+++++++++++" <<std::endl;
    std::cout << "+  index  |First Name|Last name |nick name +" <<std::endl;
    std::cout << "++++++++++|++++++++++|++++++++++|+++++++++++" <<std::endl;

    while (i < 8 &&  i < this->_i)
    {
        std::cout << "|    " <<this->book[i].getInd() << "    |";
        ft_print_string(this->book[i].getFirst());
        std::cout << "|";
        ft_print_string(this->book[i].getLast());
        std::cout << "|";
        ft_print_string(this->book[i].getNick());
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << "++++++++++|++++++++++|++++++++++|+++++++++++" <<std::endl;
}

/*
void PhoneBook::Search(void) const {
    int i = 0;

    std::cout << "|---------|----------|----------|----------|" << std::endl;
    std::cout << "|  index  |first name|last name |nick name |" << std::endl;
    std::cout << "|---------|----------|----------|----------|" << std::endl;
    while (i < 8 && i < this->_i)
    {
        std::cout << "|    " << this->book[i].getInd() << "    |";
        ft_print_string(this->book[i].getFirst());
        std::cout << "|";
        ft_print_string(this->book[i].getLast());
        std::cout << "|";
        ft_print_string(this->book[i].getNick());
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << "|---------|----------|----------|----------|" << std::endl;
}
*/

void PhoneBook::printContact(int i) const {
    if (i > this->_i)
    {
        std::cout << "This ID Phone " << i << " Not found" << std::endl;
        return ;
    }
    i--;
    std::cout << "Index: " << this->book[i].getInd() << std::endl;
    std::cout << "Firstname: " << this->book[i].getFirst() << std::endl;
    std::cout << "Lastname: " << this->book[i].getLast() << std::endl;
    std::cout << "Nickname: " << this->book[i].getNick() << std::endl;
    std::cout << "Phonenumber: " << this->book[i].getNumber() << std::endl;
    std::cout << "Darkest secret: " << this->book[i].getSecret() << std::endl;
}