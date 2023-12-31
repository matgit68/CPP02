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

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif