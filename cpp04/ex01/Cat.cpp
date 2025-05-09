#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Default constructor for Cat is called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	this->type = copy.type;
	std::cout << "Copy constructor for Cat is called" << std::endl;
}

Cat::Cat(const std::string &name) : Animal(name) {
	this->type = name;
	std::cout << "Constructor for Cat is called" << std::endl;
}

Cat &Cat::operator=(const Cat& src) {
	this->type = src.type;
	std::cout << "Assignment operator for Cat is called " << std::endl;
	return (*this);
}

void Cat::makeSound( void ) const {
	std::cout << "Cat: meowww!!" << std::endl;
}

Cat::~Cat() {
	std::cout << "Destructor for Cat is called" << std::endl;
}