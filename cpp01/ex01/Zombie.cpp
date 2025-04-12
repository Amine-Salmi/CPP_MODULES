#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
}