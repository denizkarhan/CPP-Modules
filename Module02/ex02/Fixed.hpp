#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"

class Fixed
{
	private:
		int fixedPointValue;
		static const int bits = 8;
	
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(Fixed const &oth);
		~Fixed();

		Fixed &operator=(Fixed const &obj);
		
		bool operator<(Fixed const &obj);
		bool operator>(Fixed const &obj);
		bool operator<=(Fixed const &obj);
		bool operator>=(Fixed const &obj);
		bool operator==(Fixed const &obj);
		bool operator!=(Fixed const &obj);
		
		Fixed operator*(Fixed const &obj);
		Fixed operator/(Fixed const &obj);
		Fixed operator+(Fixed const &obj);
		Fixed operator-(Fixed const &obj);
		
		Fixed &operator++();
		Fixed &operator--();
		
		Fixed operator++(int);
		Fixed operator--(int);
	
		static Fixed max(Fixed obj1, Fixed obj2);
		static Fixed min(Fixed obj1, Fixed obj2);
	
		float	toFloat() const;
		int		toInt() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, const Fixed &f);

#endif
