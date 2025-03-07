#include "Contact.hpp"

Contact::Contact(void) {
    return ;
}

Contact::~Contact(void) {
    return ;
}

static void    check_empty_value(std::string out, std::string *in)
{
    std::string tmp;

    std::cout << out;
	std::getline(std::cin, tmp);
    while (!tmp[0])
    {
        std::cout << "Pls Enter value!" << std::endl;
		std::cout << out;
		std::getline(std::cin, tmp);
    }
    *in = tmp;
}

static int	ft_check_phone(std::string nb)
{
	int i;
	if ((!std::isdigit(nb[0]) && nb[0] != '+') || (nb[0] == '+' && !std::isdigit(nb[1])))
	{
		std::cout << "Pls enter a valid NB or add + in begin" << std::endl;
		return (0);
	}
	for (i = 1; nb[i]; i++)
	{
		if(!std::isdigit(nb[i]))
		{
			std::cout << "Pls enter valid NB" << std::endl;
			return (0);
		}
	}
	if (i < 3)
	{
		std::cout << "Pls min  digits is 3" << std::endl;
		return (0);
	}
	return (1);
}

// static int         ft_is_phonenumber(std::string pn) 
// {
//     int i;
    
//     if ((!std::isdigit(pn[0]) && pn[0] != '+') || (pn[0] == '+' && !std::isdigit(pn[1])))
//     {
//         std::cout << "Please enter a valid number (no brackets, only '+' and digits allowed)" << std::endl;        
//         return (false);
//     }
//     for (i = 1; pn[i]; i++)
//     {
//         if (!std::isdigit(pn[i]))
//         {
//             std::cout << "Please enter a valid number (no brackets, only '+' and digits allowed)" << std::endl;
//             return (false);
//         }
//     }
//     if ((pn[0] == '+' && i < 4) || i < 3)
//     {
//         std::cout << "Please enter a valid number (min 3 digits)" << std::endl;
//         return (false);
//     }
//     return (true);
// }

void Contact::Addfone(int i)
{
	std::string tmp_nb;
	this->_idx = i;

	check_empty_value("FirstName: ", &this->_firstname);
	check_empty_value("LastName: ", &this->_lastname);
	check_empty_value("NickName: ", &this->_nickname);
	check_empty_value("Number: ", &tmp_nb);
	while (!ft_check_phone(tmp_nb))
		check_empty_value("Number: ", &tmp_nb);
	this->_phonenumber = tmp_nb;
	check_empty_value("Darkest secret: ", &this->_dardsecret);

}

// void        Contact::init(int i) {
//     std::string tmp_num;
    
//     this->_index = i;
//     check_empty_value("Firstname: ", &this->_firstname);
//     check_empty_value("Lastname: ", &this->_lastname);
//     check_empty_value("Nickname: ", &this->_nickname);
//     check_empty_value("Number: ", &tmp_num);
//     while (!ft_is_phonenumber(tmp_num))
//         check_empty_value("Number: ", &tmp_num);
//     this->_phonenumber = tmp_num;
//     check_empty_value("Darkest secret: ", &this->_dardsecret);
// }

std::string		Contact::getFirst(void) const {
	return (this->_firstname);
}

int		Contact::getInd(void) const {
	return (this->_idx);
}

std::string	Contact::getLast(void) const {
	return (this->_lastname);
}

std::string	 Contact::getNick(void) const {
	return (this->_nickname);
}

std::string Contact::getSecret(void) const {
	return (this->_dardsecret);
}

std::string Contact::getNumber(void) const {
	return (this->_phonenumber);
}
