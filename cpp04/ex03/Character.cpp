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
	if (m == NULL)
	{
		std::cout << "Cannot equip NULL materia!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "The inventory is full" << std::endl;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && this->inventory[idx])
	{
		this->inventory[idx] = NULL;
		return ;
	}
	std::cout << "Cannot use materia, index " <<  idx << " is invalid or empty!" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->inventory[idx])
	{
		this->inventory[idx]->use(target);
		return ;
	}
	std::cout << "Cannot use materia, index " <<  idx << " is invalid or empty!" << std::endl;
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