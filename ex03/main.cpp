#include "Point.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(0, 10);
	Point c(10, 0);
	Point p(0.1f, 0.1f);

	if (bsp(a,b,c,p))
		std::cout << "DA !" << std::endl;
	else
		std::cout << "NEGATIVE !" << std::endl;
	return (0);
}