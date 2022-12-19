#include "Point.hpp"

float C_x(Point k)
{
	return k.getX().toFloat();
}

float C_y(Point k)
{
	return k.getY().toFloat();
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	float b_x = C_x(b) - C_x(a), b_y = C_y(b) - C_y(a);
	float c_x = C_x(c) - C_x(a), c_y = C_y(c) - C_y(a);
	float p_x = C_x(p) - C_x(a), p_y = C_y(p) - C_y(a);

	float d = (b_x * c_y) - (c_x * b_y);

	float WA = (p_x * (b_y - c_y) + p_y * (c_x - b_x) + (b_x * c_y) - (c_x * b_y)) / d;
	float WB = (p_x * c_y - p_y * c_x) / d;
	float WC = ((p_y * b_x) - (p_x * b_y)) / d;

	if ((WA >= 0 && WA <= 1) && (WB >= 0 && WB <= 1) && (WC >= 0 && WC <= 1))
		return true;
	return false;
}
