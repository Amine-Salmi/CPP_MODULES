#include "Point.hpp"

Point::Point():x(0), y(0)
{
	std::cout << "Point Default Constructor called" << std::endl;
}

Point::Point(Fixed const x, Fixed const y): x(x), y(y)
{
	std::cout << "Point Constructor called" << std::endl;
}