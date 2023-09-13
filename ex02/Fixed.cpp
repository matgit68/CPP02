#include "Fixed.hpp"

Fixed::Fixed(void) 
	{nb = 0;}

Fixed::Fixed(const Fixed &f)
	{this->nb = f.getRawBits();}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &f)
	{this->nb = f.getRawBits();return (*this);}

int Fixed::getRawBits(void) const
	{return (this->nb);}

void Fixed::setRawBits(int const raw)
	{this->nb = raw;}

Fixed::Fixed(const int i)
	{this->nb = i * (1 << Fixed::fpart);}

Fixed::Fixed(const float f)
	{this->nb = roundf(f * (1 << Fixed::fpart));}

float Fixed::toFloat(void) const
	{return ((float) this->nb / (1 << Fixed::fpart));}

int Fixed::toInt(void) const
	{return (this->nb >> Fixed::fpart);}

std::ostream &operator<<(std::ostream &out, Fixed const &f)
	{out << f.toFloat(); return (out);}

//////////////////////////////////////////////////////////////////////////

Fixed Fixed::operator+(const Fixed &f)
	{return (Fixed(this->toFloat() + f.toFloat()));}

Fixed Fixed::operator-(const Fixed &f)
	{return (Fixed(this->toFloat() - f.toFloat()));}

Fixed Fixed::operator*(const Fixed &f)
	{return (Fixed(this->toFloat() * f.toFloat()));}

Fixed Fixed::operator/(const Fixed &f) {
	if (f.toFloat() == 0)
		return (Fixed(0));
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed Fixed::operator++( void ) {return *this = *this + 1;} // prefix

Fixed Fixed::operator--() {return *this = *this - 1;} // prefix

Fixed Fixed::operator++(int) { // postfix
	*this = *this + 1;
	return (*this -1);
}

Fixed Fixed::operator--(int) { // postfix
	*this = *this - 1;
	return (*this + 1);
}

bool Fixed::operator<(const Fixed &f) {return (this->toFloat() < f.toFloat());}
bool Fixed::operator>(const Fixed &f) {return (this->toFloat() > f.toFloat());}
bool Fixed::operator<=(const Fixed &f) {return (this->toFloat() <= f.toFloat());}
bool Fixed::operator>=(const Fixed &f) {return (this->toFloat() >= f.toFloat());}
bool Fixed::operator!=(const Fixed &f) {return (this->toFloat() != f.toFloat());}
bool Fixed::operator==(const Fixed &f) {return (this->toFloat() == f.toFloat());}

Fixed Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}
Fixed Fixed::min(const Fixed &a, const Fixed &b) {
	std::cout << "[const min]";
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b) {
	std::cout << "[const max]";
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}
