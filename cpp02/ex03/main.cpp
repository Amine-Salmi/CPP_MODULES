#include "Point.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(0, 0);
	Point c(4, 2);
	Point p(10, 3);
	bool res;

	res = bsp(a, b, c, p);
	if (res)
		std::cout << "The point (" << p.getX() << "," << p.getY() 
			<< ") is inside the triangle." << std::endl;
	else
		std::cout << "The point (" << p.getX() << "," << p.getY() 
			<< ") is outside the triangle." << std::endl;
	return (0);
}	