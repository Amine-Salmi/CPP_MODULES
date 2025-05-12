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

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << "inv 1 " << this->inventory[i] << std::endl;
			std::cout << "call equip" << std::endl;
			return ;
		}
	}
}

std::string const &Character::getName() const {
	return (this->name);
}

AMateria **Character::getInventory() {
	return (this->inventory);
}

Character::~Character() {
	std::cout << "Destructor for character is called" << std::endl;
}