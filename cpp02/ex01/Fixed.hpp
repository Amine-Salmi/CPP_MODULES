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
	float toFloat( void ) const;
	// float toFloat( void );
	int getRawBits( void ) const;
	// void setRawBits(int const raw);
private:
	int value;
	static const int scaleBits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &object);
 