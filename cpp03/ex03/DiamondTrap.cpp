#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
    this->name = "";
    this->hitPoints = 0;
    this->energyPoints = 0;
    this->attackDamage = 0;
    std::cout << "Default Constructor is called for DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) :  ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
    std::cout << "Copy constructor is called for DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clapTrap"), FragTrap(name), ScavTrap(name) {
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "Constructor is called for (DiamondTrap) Name: " << this->name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "Assignment operator is called for DiamondTrap" << std::endl;
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Destructor is called for DiamondTrap" << std::endl;
}