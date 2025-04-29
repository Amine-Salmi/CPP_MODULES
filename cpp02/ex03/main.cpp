#include "Point.hpp"

int main( void ) {
	Point a(2, 3);
	Point b(0, 0);
	Point c(3, 1);
	Point p(1, 1);
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