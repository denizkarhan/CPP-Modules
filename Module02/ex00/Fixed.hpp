#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class   Fixed
{
	private:
		int fixedPoint;
		static const int fracBits = 8;
	public:
		Fixed();
		Fixed(Fixed &a);
		~Fixed();
		Fixed &operator=(Fixed &obj);
		int		getRawBits(void);
		void	setRawBits(int integer);
};

#endif