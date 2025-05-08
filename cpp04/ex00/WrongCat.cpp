#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "Default constructor for WrongCat is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
	this->type = copy.type;
	std::cout << "Copy constructor for WrongCat is called" << std::endl;
}

WrongCat::WrongCat(const std::string &name) : WrongAnimal(name) {
	this->type = name;
	std::cout << "Constructor for WrongCat is called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& src) {
	this->type = src.type;
	std::cout << "Assignment operator for WrongCat is called " << std::endl;
	return (*this);
}

void WrongCat::makeSound( void ) const {
	std::cout << "WrongCat: meowww!!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor for WrongCat is called" << std::endl;
}