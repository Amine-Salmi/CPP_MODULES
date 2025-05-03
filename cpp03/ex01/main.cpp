#include "ScavTrap.hpp"

int main()
{
	ScavTrap obj("Amine");
	std::cout << "Name: " << obj.getName() << std::endl;
	std::cout << "HP  : " << obj.getHitPoints() << std::endl;
	std::cout << "EP  : " << obj.getEnergyPoints() << std::endl;
	std::cout << "DM  : " << obj.getAttackDamage() << std::endl;
	// ClapTrap obj;
	// ClapTrap clapTrap("Roland");
	
	// std::cout << "Initial state of ClapTrap: " << std::endl;
	// std::cout << "Name: " << clapTrap.getName() << std::endl;
	// std::cout << "Hit Points: " << clapTrap.getHitPoints() << std::endl;
	// std::cout << "Energy Points: " << clapTrap.getEnergyPoints() << std::endl;
	// std::cout << "Attack Damage: " << clapTrap.getAttackDamage() << std::endl;

	// clapTrap.attack("target 1");
	// clapTrap.attack("target 2");

	// clapTrap.takeDamage(5);
	// // std::cout << "HP: " << clapTrap.getHitPoints() << std::endl;
	// clapTrap.beRepaired(2);
	// std::cout << "HP: " << clapTrap.getHitPoints() << std::endl;
	// clapTrap.attack("target3");
	// clapTrap.takeDamage(7);
	// clapTrap.attack("target3");
	// clapTrap.beRepaired(5);
}