#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->name = "";
	this->hitPoints = 0;
	this->energyPoints = 0;
	this->attackDamage = 0;
	std::cout << "Default Constructor is called for FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	std::cout << "Copy constructor is called for FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Constructor is called for FragTrap" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << this->name << ": High five, guys! ✋" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "Assignment operator is called for FragTrap" << std::endl;
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor is called for FragTrap" << std::endl;
}