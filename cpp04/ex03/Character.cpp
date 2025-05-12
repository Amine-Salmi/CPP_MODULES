#include "Character.hpp"

Character::Character() {
	std::cout << "Default constructor for character is called" << std::endl;
}

Character::Character(const Character &copy) {
	(void)copy;
	std::cout << "copy constructor for character is called" << std::endl;
}

Character::Character(std::string const &name) {
	this->name = name;
	std::cout << "Constructor for character is called" << std::endl;
}

Character &Character::operator=(const Character &src) {
	if (this == &src)
		return (*this);
	this->name = src.name;
	return (*this);
}

std::string const &Character::getName() const {
	return (this->name);
}

Character::~Character() {
	std::cout << "Destructor for character is called" << std::endl;
}