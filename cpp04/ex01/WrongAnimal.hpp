#pragma once

#include <iostream>
#include <string>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal(const std::string& type);
	~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal& src);

	void makeSound( void ) const;

	std::string getType( void ) const;
};
