#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

public:
    Contact(void);
    ~Contact(void);

    void        Addfone(int i);
    int         getInd(void) const;
    std::string getFirst(void) const;
    std::string getLast(void) const;
    std::string getNick(void) const;
    std::string getNumber(void) const;
    std::string getSecret(void) const;

private:

    int         _idx;
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _dardsecret;

};

#endif
