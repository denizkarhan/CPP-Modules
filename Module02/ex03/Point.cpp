#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	std::cout << "Point's default constructor called" << std::endl;
}

Point::Point(const Fixed _x, const Fixed _y) : x(_x), y(_y)
{

}

Point::Point(const Point &oth) : x(oth.x), y(oth.y)
{

}

Point::~Point()
{
	
}

Point &Point::operator=(Point const &obj)
{
	(Fixed)this->x = (Fixed)obj.x;
	(Fixed)this->y = (Fixed)obj.y;
	return *this;
}

Fixed	Point::getX()
{
	return (this->x);
}

Fixed	Point::getY()
{
	return (this->y);
}
