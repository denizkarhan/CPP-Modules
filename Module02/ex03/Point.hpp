#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include "iostream"
# include "cmath"

class Point
{
	private:
        Fixed const x;
        Fixed const y;
	
	public:
        Point();
		Point(const Point &oth);
		Point(Fixed x, Fixed y);
		~Point();
        
		Fixed getX();
		Fixed getY();
		
        Point &operator=(const Point &oth);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
