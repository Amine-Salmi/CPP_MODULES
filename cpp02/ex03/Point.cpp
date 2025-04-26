#include "Point.hpp"

Point::Point():x(0), y(0)
{
	// std::cout << "Point Default Constructor called" << std::endl;
}

Point::Point(Fixed const x, Fixed const y): x(x), y(y)
{
	// std::cout << "Point Constructor called" << std::endl;
}

Point::Point(Point const &other):x(other.x), y(other.y)
{
	// std::cout << "copy Constructor is callde" << std::endl;
}

Point &Point::operator=(Point const &other)
{
	if (this != &other)
		return (*this);
	return (*this);
}

Fixed Point::getX( void ) const {
	return (x);
}

Fixed Point::getY( void ) const {
	return (y);
}

Point::~Point()
{
}
