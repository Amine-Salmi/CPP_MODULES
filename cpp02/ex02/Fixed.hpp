#include <iostream>
#include <string>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	
	int toInt( void ) const;
	Fixed operator+(Fixed const &obj);
	Fixed operator-(Fixed const &obj);
	Fixed operator*(Fixed const &obj);
	Fixed operator/(Fixed const &obj);
	bool operator>(Fixed const &obj);
	bool operator>=(Fixed const &obj);
	bool operator<(Fixed const &obj);
	bool operator<=(Fixed const &obj);
	bool operator==(Fixed const &obj);
	bool operator!=(Fixed const &obj);
	// Fixed &operator++();
	float toFloat( void ) const;
	int getRawBits( void ) const;
	// void setRawBits(int const raw);
private:
	int value;
	static const int scaleBits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &object);
 