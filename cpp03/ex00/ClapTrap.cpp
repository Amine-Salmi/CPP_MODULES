#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(0), energyPoints(0), attackDamage(0) {
	std::cout << "Default Constructor is called for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage) {
	std::cout << "Copy constructor is called for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "constructor is called for ClapTrap" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << getName() << 
		" is already dead and cannot attack!" << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << getName() << 
		" has no energy left to attack!" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << getName() << " attacks " << target << "," << 
	" causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0)
	{
		if (amount > this->hitPoints)
			this->hitPoints = 0;
		else
			this->hitPoints -= amount;
		std::cout << "ClapTrap " << getName() << " takes " <<
		amount << " points of damage! Remaining hit points: " << 
		getHitPoints() << "." << std::endl;
	}
	else {
		std::cout << "ClapTrap " << getName() << " is already dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << getName() << 
		" is already dead and cannot repair itself!" << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << getName() << 
		" has no energy left to repair itself!" << std::endl;
		return ;
	}
	unsigned int healAmount = std::min(amount, 10 - hitPoints);
	this->hitPoints += healAmount;
	std::cout << "ClapTrap " << getName() <<
	" repairs itself, restoring " << amount << " hit points!" << std::endl;
}

std::string ClapTrap::getName() const {
	return (this->name);
}

int ClapTrap::getHitPoints() const {
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const {
	return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const {
	return (this->attackDamage);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Assignment operator is called for ClapTrap" << std::endl;
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor is called for ClapTrap" << std::endl;
}
