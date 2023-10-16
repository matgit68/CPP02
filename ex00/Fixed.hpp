#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int	nb;
	static const int fpart = 8;

public:
	Fixed();
	Fixed(const Fixed &f);
	~Fixed();

	Fixed &operator=(const Fixed &f);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif