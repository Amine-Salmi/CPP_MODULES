#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(Fixed const x, Fixed const y);
	Point(Point const &other);
	Point &operator=(Point const &other);
private:
	Fixed const x;
	Fixed const y;
};