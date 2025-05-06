#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->hitPoints = 0;
	this->attackDamage = 0;
	std::cout << "Default Constructor is called for FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->attackDamage = 30;
	std::cout << "Constructor is called for FragTrap" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << this->name << ": High five, guys! ✋" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor is called for FragTrap" << std::endl;
}