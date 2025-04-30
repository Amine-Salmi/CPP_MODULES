#pragma once

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

	Fixed operator++(int);
	Fixed operator--(int);
	Fixed operator++();
	Fixed operator--();

	int toInt( void ) const;
	float toFloat( void ) const;

	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(Fixed const &first, Fixed const &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &max(Fixed const &first, Fixed const &second);

	int getRawBits( void ) const;
	void setRawBits(int const value);
private:
	int value;
	static const int scaleBits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &object);
 