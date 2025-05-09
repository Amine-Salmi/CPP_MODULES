#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("") {
	std::cout << "Default constructor for WrongAnimal is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type) {
	std::cout << "Copy constructor for WrongAnimal is called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type) {
	std::cout << "Constructor for WrongAnimal is called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor for WrongAnimal is called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& src) {
	this->type = src.type;
	std::cout << "Assignment operator for WrongAnimal is called " << std::endl;
	return (*this);
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "The WrongAnimal make a sound" << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return (this->type);
}