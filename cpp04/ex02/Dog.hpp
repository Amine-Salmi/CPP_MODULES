#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &copy);
	// Dog(const std::string &name);
	~Dog();

	Dog &operator=(const Dog &src);

	void makeSound( void ) const;
	void setIdea(int index, const std::string idea);
	std::string getIdea(int index);
};