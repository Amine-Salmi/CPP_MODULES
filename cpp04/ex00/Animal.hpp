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
	~Animal();

	Animal &operator=(const Animal& src);

	std::string getType( void ) const;
	// void setType();
};