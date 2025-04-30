#pragma once

#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(Fixed const x, Fixed const y);
	Point(Point const &other);
	Point &operator=(Point const &other);
	~Point();
	Fixed getX( void ) const ;
	Fixed getY( void ) const ;
private:
	Fixed const x;
	Fixed const y;
};

Fixed area(Point const point1, Point const point2, Point const point3);
bool bsp( Point const a, Point const b, Point const c, Point const point);