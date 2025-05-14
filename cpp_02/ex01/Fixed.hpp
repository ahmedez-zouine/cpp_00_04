#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:

    Fixed(void);                        // canon constr void
    Fixed(int const n);
    Fixed(float const f);
    Fixed(Fixed const &src);            // canon constr copy
    ~Fixed(void);                       // canon deconstr

    Fixed& operator=(Fixed const &rhs); // canon operator=

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

private:

    int                 _value;
    static const int    _fract = 8;

};

std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif /* FIXED_HPP */
