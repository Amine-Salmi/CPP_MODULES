#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
    this->name = "";
    this->hitPoints = 0;
    this->energyPoints = 0;
    this->attackDamage = 0;
    std::cout << "Default Constructor is called for DiamondTrap" << std::endl;
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

DiamondTrap::~DiamondTrap() {
    std::cout << "Destructor is called for DiamondTrap" << std::endl;
}