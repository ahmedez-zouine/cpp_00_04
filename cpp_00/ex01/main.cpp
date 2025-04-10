
#include "phonebook.hpp"

int ft_get_nb(std::string s)
{
    int i = 0;

    if (s[0] == '\0')
        return (0);
    if (s[i] >= '1' && s[i] <= '8' && s[1] == '\0')
        return (s[i] - 48);
    std::cout << "Please enter a number between 1 and 8 (no::z space)" << std::endl;
    return (-1);
}

int main(void)
{
    PhoneBook book;
    std::string str_in;

    std::cout << "Please enter one of this three commands:\n - ADD (add contact)\n - SEARCH (search in phonebook)\n - EXIT  " << std::endl;
    std::cout << "phonebook > ";
    while (std::getline(std::cin, str_in) && str_in.compare("EXIT"))
    {
        if (!str_in.compare("ADD"))
            book.addContact();
        else if(!str_in.compare("SEARCH"))
        {
            book.Search();
            std::cout << std::endl;
            std::cout << "Select a contact to get information or press 'ENTER' to skip: ";
            std::getline(std::cin, str_in);
            while (ft_get_nb(str_in) == -1)
            {
                std::cout << "Select: ";
                std::getline(std::cin, str_in);
            }
            if (ft_get_nb(str_in))
                book.printContact(ft_get_nb(str_in));
        }
        std::cout << "phonebook > ";
    }
    return (0);
}
