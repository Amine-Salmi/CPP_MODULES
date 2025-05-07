#include "ScavTrap.hpp"

int main()
{
	ScavTrap obj("Amine");
	ScavTrap obj2;
	obj.guardGate();
	obj2 = obj;
	obj2.guardGate();
}