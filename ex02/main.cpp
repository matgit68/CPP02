#include "Fixed.hpp"

int main( void ) {
	Fixed a(10.1f);
	Fixed const b(9.1f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "a < b is " << a < b << std::endl;
/*	std::cout << "a > b is " << a > b << std::endl;
	std::cout << "a <= b is " << a <= b << std::endl;
	std::cout << "a >= b is " << a >= b << std::endl;
	std::cout << "a != b is " << a != b << std::endl;
	std::cout << "a == b is " << a == b << std::endl;
*/	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	return 0;
}