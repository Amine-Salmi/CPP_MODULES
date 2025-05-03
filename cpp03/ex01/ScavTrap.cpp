#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Default Constructor is called for Scavtrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "Constructor is called for (ScavTrap) Name: " << this->name << std::endl;
}

ScavTrap::~ScavTrap()  {
    std::cout << "Destructor is called for ScavTrap" << std::endl;
}