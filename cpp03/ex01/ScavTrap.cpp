#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->name = "";
    this->hitPoints = 0;
    this->energyPoints = 0;
    this->attackDamage = 0;
    this->isGuarding = false;
    std::cout << "Default Constructor is called for Scavtrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->isGuarding = false;
    std::cout << "Constructor is called for (ScavTrap) Name: " << this->name << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->hitPoints == 0)
	{
		std::cout << "ScavTrap " << getName() << 
		" is already dead and cannot attack!" << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ScavTrap " << getName() << 
		" has no energy left to attack!" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << getName() << " attacks " << target << "," << 
	" causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    if (!this->isGuarding)
    {
        this->isGuarding = true;
        std::cout << "ScavTrap " << this->name << " has entered Gate Keeper mode!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->name << " is already in Gate Keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()  {
    std::cout << "Destructor is called for ScavTrap" << std::endl;
}