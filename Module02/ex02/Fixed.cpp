#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPointValue = 0;
}

Fixed::Fixed(const int number)
{
	this->fixedPointValue = (number << this->bits);
}

Fixed::Fixed(const float fnumber)
{
	this->fixedPointValue = roundf(fnumber * (1 << this->bits));
}

Fixed::Fixed(const Fixed &copy)
{
	this->fixedPointValue = copy.getRawBits();
}

Fixed::~Fixed()
{

}

Fixed &Fixed::operator=(const Fixed &src)
{
	this->fixedPointValue = src.getRawBits();
	return (*this);
}

bool Fixed::operator<(Fixed const &obj)
{
	return (this->toFloat() < obj.toFloat());
}

bool Fixed::operator<=(Fixed const &obj)
{
	return (this->toFloat() <= obj.toFloat());
}

bool Fixed::operator>(Fixed const &obj)
{
	return (this->toFloat() > obj.toFloat());
}

bool Fixed::operator>=(Fixed const &obj)
{
	return (this->toFloat() >= obj.toFloat());
}

bool Fixed::operator==(Fixed const &obj)
{
	return (this->toFloat() == obj.toFloat());
}

bool Fixed::operator!=(Fixed const &obj)
{
	return (this->toFloat() != obj.toFloat());
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}

Fixed Fixed::operator+(Fixed const &obj)
{
	return (Fixed)(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(Fixed const &obj)
{
	return (Fixed)(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(Fixed const &obj)
{
	return (Fixed)(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(Fixed const &obj)
{
	return (Fixed)(this->toFloat() / obj.toFloat());
}

Fixed &Fixed::operator++()
{
	this->fixedPointValue++;
	return *this;
}

Fixed &Fixed::operator--()
{
	this->fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixedPointValue--;
	return tmp;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixedPointValue++;
	return tmp;
}

int Fixed::getRawBits(void) const
{
	return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return (fixedPointValue / (float)(1 << bits));
}

int Fixed::toInt(void) const
{
	return (fixedPointValue >> bits);
}

Fixed Fixed::max(Fixed obj1, Fixed obj2)
{
	return (obj1 > obj2 ? obj1 : obj2);
}

Fixed Fixed::min(Fixed obj1, Fixed obj2)
{
	return (obj1 < obj2 ? obj1 : obj2);
}
