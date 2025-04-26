#include "Point.hpp"

int main( void ) {
	Point a(2, 3);
	Point b(0, 0);
	Point c(3, 1);
	Point p(1, 1);
	bool res;

	res = bsp(a, b, c, p);
	if (res == true)
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
}