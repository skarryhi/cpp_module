#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) {
    std::cout << BOLD GRN "Default constructor called" WHT << std::endl;
}

Fixed::Fixed(Fixed const &other) : fixed(other.fixed) {
    std::cout << BOLD GRN "Copy constructor called" WHT << std::endl;
}

Fixed::Fixed(int const other) {
    std::cout << BOLD GRN "Int constructor called" WHT << std::endl;
    this->fixed = other << this->nb;
}

Fixed::Fixed(float const other) {
    std::cout << BOLD GRN "Float constructor called" WHT << std::endl;
    this->fixed = (int)roundf(other * (1 << this->nb));
}

Fixed&          Fixed::operator=(Fixed const &x) {
    this->fixed = x.fixed;
    std::cout << BOLD YEL " 💎  Operator \"=\" called" WHT << std::endl;
    return *this;
}

float           Fixed::toFloat() const {
    float   res = (float)this->fixed / (1 << this->nb);
    std::cout << BOLD YEL " 🔫  toFloat called" WHT << std::endl;
    return res;
}

int             Fixed::toInt() const {
    int   res = this->fixed / (1 << this->nb);
    std::cout << BOLD YEL " 🔫  toInt called" WHT << std::endl;
    return res;
}

int             Fixed::getRawBits() const {
    std::cout << BOLD " 🎍  getRawBits member function called" WHT << std::endl;
    return this->fixed;
}

void            Fixed::setRawBits(int const raw) {
    std::cout << BOLD  " 🎋  setRawBits member function called" WHT << std::endl;
    this->fixed = raw;
}

Fixed::~Fixed() {
    std::cout << BOLD RED " 🍄  Default destructor called" WHT << std::endl;
}

std::ostream&   operator<<(std::ostream &out, Fixed const &x) {
    std::cout << BOLD YEL " 💎  Operator \"<<\" called" WHT << std::endl;
    out << x.toFloat();
    return out;
}
