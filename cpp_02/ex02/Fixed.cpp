#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0) {}

Fixed::Fixed(Fixed const & src) {
    *this = src;
}

Fixed::Fixed(int const value) {
    this->_nb = value << this->_fractionalBits;
}

Fixed::Fixed(float const value) {
    this->_nb = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed(void) {}

Fixed & Fixed::operator=(Fixed const & rhs) {
    if (this != &rhs)
        this->_nb = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return this->_nb;
}

void Fixed::setRawBits(int const raw) {
    this->_nb = raw;
}

float Fixed::toFloat(void) const {
    return (float)this->_nb / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_nb >> this->_fractionalBits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return o;
}

bool Fixed::operator>(Fixed const & rhs) const {
    return this->_nb > rhs.getRawBits();
}

bool Fixed::operator<(Fixed const & rhs) const {
    return this->_nb < rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const & rhs) const {
    return this->_nb >= rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const & rhs) const {
    return this->_nb <= rhs.getRawBits();
}

bool Fixed::operator==(Fixed const & rhs) const {
    return this->_nb == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const & rhs) const {
    return this->_nb != rhs.getRawBits();
}

Fixed Fixed::operator+(Fixed const & rhs) const {
    Fixed result;

    result.setRawBits(this->_nb + rhs.getRawBits());
    return result;
}

Fixed Fixed::operator-(Fixed const & rhs) const {
    Fixed result;

    result.setRawBits(this->_nb - rhs.getRawBits());
    return result;
}

Fixed Fixed::operator*(Fixed const & rhs) const {
    Fixed result;

    result.setRawBits((this->_nb * rhs.getRawBits()) >> this->_fractionalBits);
    return result;
}

Fixed Fixed::operator/(Fixed const & rhs) const {
    Fixed result;

    result.setRawBits((this->_nb << this->_fractionalBits) / rhs.getRawBits());
    return result;
}

Fixed & Fixed::operator++(void) {
    this->_nb++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);

    operator++();
    return tmp;
}

Fixed & Fixed::operator--(void) {
    this->_nb--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);

    operator--();
    return tmp;
}

Fixed & Fixed::min(Fixed & a, Fixed & b) {
    return a < b ? a : b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
    return a > b ? a : b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b) {
    return a < b ? a : b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b) {
    return a > b ? a : b;
}