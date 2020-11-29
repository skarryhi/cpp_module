#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) {
    std::cout << BOLD GRN "Default constructor called" WHT << std::endl;
}

Fixed::Fixed(Fixed const &other) : fixed(other.fixed) {
    std::cout << BOLD GRN "Copy constructor called" WHT << std::endl;
}

int     Fixed::getRawBits() const {
    std::cout << BOLD " 🎍  getRawBits member function called" WHT << std::endl;
    return this->fixed;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << BOLD  " 🎋  setRawBits member function called" WHT << std::endl;
    this->fixed = raw;
}

Fixed&   Fixed::operator=(Fixed const &x) {
    this->fixed = x.fixed;
    std::cout << BOLD RED " 💎  Operator = called" WHT << std::endl;
    return *this;
}

Fixed::~Fixed() {
    std::cout << BOLD RED " 🍄  Default destructor called" WHT << std::endl;
}
