#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( 10);
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "int part of a is " << a.toInt() << std::endl;
	std::cout << "int part of b is " << b.toInt() << std::endl;
	std::cout << "int part of c is " << c.toInt() << std::endl;
	std::cout << "int part of d is " << d.toInt() << std::endl;
	return 0;
}