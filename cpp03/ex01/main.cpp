#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("Roland");
	
	std::cout << "Initial state of ClapTrap: " << std::endl;
	std::cout << "Name: " << clapTrap.getName() << std::endl;
	std::cout << "Hit Points: " << clapTrap.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << clapTrap.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << clapTrap.getAttackDamage() << std::endl;

	clapTrap.attack("target 1");
	clapTrap.attack("target 2");

	clapTrap.takeDamage(5);
	// std::cout << "HP: " << clapTrap.getHitPoints() << std::endl;
	clapTrap.beRepaired(2);
	std::cout << "HP: " << clapTrap.getHitPoints() << std::endl;
	clapTrap.attack("target3");
	clapTrap.takeDamage(7);
	clapTrap.attack("target3");
	clapTrap.beRepaired(5);
}