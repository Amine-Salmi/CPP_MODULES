#include "Weapon.hpp"

Weapon::Weapon(std::string Weapon)
{
	this->type = Weapon;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType( void ) {
	return (this->type);
}