#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor is called" << std::endl;
	this->value = new int(42);
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "copy Constructor is called" << std::endl;
	this->value = new int(*other.value);
}
Fixed::Fixed(int data)
{
	std::cout << "parametrezed Constructor is called" << std::endl;
	this->value = new int(data);
}

void Fixed::display()
{
	std::cout << "value: " << *value << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called for " << std::endl;
}

int main()
{
	Fixed obj1;
	obj1.display();

	Fixed obj2 = obj1;
	obj2.display();
	return (0);
}