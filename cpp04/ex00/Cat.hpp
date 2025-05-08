#pragma once

#include "Animal.hpp"

class Cat : public Animal {
public: 
	Cat();
	Cat(const Cat &copy);
	Cat(const std::string& name);
	~Cat();

	Cat &operator=(const Cat& copy);

	void makeSound( void ) const;
};