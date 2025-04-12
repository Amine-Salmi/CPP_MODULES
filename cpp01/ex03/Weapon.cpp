#include "Weapon.hpp"

Weapon::Weapon(std::string Weapon)
{
	this->type = Weapon;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType( void ) {
	return (this->type);
}