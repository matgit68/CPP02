#include "Fixed.hpp"

Fixed::Fixed(void) {
	nb = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	this->nb = f.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->nb = f.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nb);
}

void Fixed::setRawBits(int const raw) {
	this->nb = raw;
}

//////////////////////////////////////////////////////////////

Fixed::Fixed(const int i) {
	this->nb = i * (1 << Fixed::fpart);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
    this->nb = roundf(f * (1 << Fixed::fpart));
}

float Fixed::toFloat(void) const{
	return ((float) this->nb / (1 << Fixed::fpart));
}

int Fixed::toInt(void) const{
    return (this->nb >> Fixed::fpart);
}

std::ostream &operator<<(std::ostream &out, Fixed const &f) {
	out << f.toFloat();
	return (out);
}
