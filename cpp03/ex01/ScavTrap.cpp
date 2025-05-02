#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "constructo is called for Scavtrap" << std::endl;
}

ScavTrap::~ScavTrap()  {
    std::cout << "Destructor is called for ScavTrap" << std::endl;
}