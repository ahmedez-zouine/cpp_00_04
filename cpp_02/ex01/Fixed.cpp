#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _value(n << this->_fract) {
    std::cout << "Inte constructor called" << std::endl;
}

Fixed::Fixed(float const f) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(f * (1 << this->_fract));
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {
    return (this->_value);
}

void Fixed::setRawBits( int const raw ) {
    this->_value = raw;
}

float Fixed::toFloat(void) const {
    return ((static_cast<float>(this->getRawBits()) / (1 << this->_fract)));
}

int Fixed::toInt(void) const {
    return (this->_value >> this->_fract);
}

std::ostream& operator<<( std::ostream & out, Fixed const& fixed ) {
    out << fixed.toFloat();
    return (out);
}