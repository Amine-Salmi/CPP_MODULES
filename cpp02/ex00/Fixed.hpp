#include <iostream>
#include <string>

class Fixed {
public:
	Fixed(); // setting the object to a valid default state;
	Fixed(const Fixed &other);
	Fixed(int data);
	void display();
	~Fixed();
private:
	int *value;
};