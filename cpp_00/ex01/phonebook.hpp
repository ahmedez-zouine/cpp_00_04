
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
class PhoneBook
{

    public:

        PhoneBook(void);
        ~PhoneBook(void);

        void    addContact(void);
        void    Search(void) const;
        void    printContact(int i) const;

    private:

        Contact book[8];
        static int _i;
};



 #endif