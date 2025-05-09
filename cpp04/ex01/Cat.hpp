#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
// private:
// 	Brain *brain;
public: 
	Cat();
	Cat(const Cat &copy);
	Cat(const std::string& name);
	~Cat();

	Cat &operator=(const Cat& copy);

	void makeSound( void ) const;
};