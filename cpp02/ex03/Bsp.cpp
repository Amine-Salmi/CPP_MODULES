#include "Point.hpp"

Fixed area(Point const point1, Point const point2, Point const point3)
{
	Fixed part1;
	Fixed part2;
	Fixed part3;
	Fixed res;

	part1 = point1.getX() * (point2.getY() - point3.getY());
	part2 = point2.getX() * (point3.getY() - point1.getY());
	part3 = point3.getX() * (point1.getY() - point2.getY());
	res = part1 + part2 + part3;
	if (res >= 0)
		return (res);
	else 
		return (res * (-1));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaAPB = area(a, point, b);
	Fixed areaAPC = area(a, point, c);
	Fixed areaCPB = area(c, point, b);
	Fixed areaABC = area(a, b, c);

	if (areaAPB + areaAPC + areaCPB == areaABC)
		return (true);
	return (false);
}