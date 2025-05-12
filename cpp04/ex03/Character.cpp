#include "ICharacter.hpp"

Character::Character() {
	std::cout << "Default constructor for character is called" << std::endl;
}

Character::Character(const Character &copy) {
	(void)copy;
	std::cout << "copy constructor for character is called" << std::endl;
}

Character::~Character() {
	std::cout << "Destructor for character is called" << std::endl;
}

std::string const &Character::getName() const {
	return (this->name);
}
