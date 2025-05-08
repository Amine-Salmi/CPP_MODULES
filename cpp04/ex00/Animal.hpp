#pragma once

#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &copy);
	Animal(const std::string& type);
	virtual ~Animal();

	Animal &operator=(const Animal& src);

	virtual void makeSound( void ) const;
	
	std::string getType( void ) const;
};