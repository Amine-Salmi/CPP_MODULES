#include "Animal.hpp"

Animal::Animal() : type("") {
	std::cout << "Default constructor for Animal is called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type) {
	std::cout << "Copy constructor for Animal is called" << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
	std::cout << "Constructor for Animal is called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor for Animal is called" << std::endl;
}

Animal &Animal::operator=(const Animal& src) {
	this->type = src.type;
	std::cout << "Assignment operator for Animal is called " << std::endl;
	return (*this);
}

void Animal::makeSound( void ) const {
	std::cout << "The animal make a sound" << std::endl;
}

std::string Animal::getType( void ) const {
	return (this->type);
}
