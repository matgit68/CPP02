#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	nb;
	static const int fpart = 8;

public:
	Fixed(void);
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed &f);
	~Fixed();
	
	Fixed &operator=(const Fixed &f);
	Fixed operator+(const Fixed &f);
	Fixed operator-(const Fixed &f);
	Fixed operator*(const Fixed &f);
	Fixed operator/(const Fixed &f);
	Fixed operator++(); // prefix
	Fixed operator++(int); // postfix
	Fixed operator--(); // prefix
	Fixed operator--(int); // postfix
	bool operator<(const Fixed &f);
	bool operator>(const Fixed &f);
	bool operator<=(const Fixed &f);
	bool operator>=(const Fixed &f);
	bool operator!=(const Fixed &f);
	bool operator==(const Fixed &f);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed min(Fixed &a, Fixed &b);
	static Fixed max(Fixed &a, Fixed &b);
	static Fixed min(const Fixed &a, const Fixed &b);
	static Fixed max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif