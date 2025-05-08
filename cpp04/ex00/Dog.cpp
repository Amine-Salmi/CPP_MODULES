#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "Default constructor for Dog is called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	this->type = copy.type;
	std::cout << "Copy constructor for Dog is called" << std::endl;
}

Dog::Dog(const std::string &name) : Animal(name) {
	this->type = name;
	std::cout << "Constructor for Dog is called" << std::endl;
}

Dog &Dog::operator=(const Dog& src) {
	this->type = src.type;
	std::cout << "Assignment operator for Dog is called " << std::endl;
	return (*this);
}

void Dog::makeSound( void ) const {
	std::cout << "Dog: Wooooof!!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Destructor for Dog is called" << std::endl;
}
