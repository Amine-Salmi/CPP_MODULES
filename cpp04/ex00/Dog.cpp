#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Default constructor for Dog is called" << std::endl;
}

Dog::Dog(const Dog &copy) {
	std::cout << "Copy constructor for Dog is called" << std::endl;
}

Dog::Dog(const std::string &name) {
	std::cout << "Constructor for Dog is called" << std::endl;
}

Dog &Dog::operator=(const Dog& src) {
	this->type = src.type;
	std::cout << "Assignment operator for Dog is called " << std::endl;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Destructor for Dog is called" << std::endl;
}

// Dog::Dog(cont std::string &name)