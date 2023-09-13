#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

/*
int main( void ) {
	Fixed a(9.2f);
	Fixed b(5);
	const Fixed c(a);
	const Fixed d(b);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	if (a < b)
		std::cout << "a < b" << std::endl;
	if (a > b)
		std::cout << "a > b" << std::endl;
	if (a <= b)
		std::cout << "a <= b" << std::endl;
	if (a >= b)
		std::cout << "a >= b" << std::endl;
	if (a != b)
		std::cout << "a != b" << std::endl;
	if (a == b)
		std::cout << "a == b" << std::endl;
	std::cout << "a + b is " << a + b << std::endl;
	std::cout << "a - b is " << a - b << std::endl;
	std::cout << "a * b is " << a * b << std::endl;
	std::cout << "a / b is " << a / b << std::endl;
	a = a + b;
	std::cout << "a is " << a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "--a is " << --a << std::endl;
	std::cout << "--a is " << --a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "b++ is " << b++ << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "b-- is " << b-- << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "min(a,b) is " << Fixed::min(a,b) << std::endl;
	std::cout << "min(c,d) is " << Fixed::min(c,d) << std::endl;
	std::cout << "max(c,d) is " << Fixed::max(c,d) << std::endl;
	return 0;
}*/