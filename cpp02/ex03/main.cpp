#include "Point.hpp"

int main( void ) {
	Point a(3, 3);
	Point b(1, 1);
	Point c(4, 1);
	Point p(4, 3);
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