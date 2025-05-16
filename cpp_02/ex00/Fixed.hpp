#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:

    Fixed(void);                        // canon constr void
    Fixed(Fixed const &src);            // canon constr copy
    ~Fixed(void);                       // canon deconstr

    Fixed& operator=(Fixed const &rhs); // canon operator=

    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:

    int                 _nb;
    static const int    _fbits = 8;

};

#endif /* FIXED_HPP */