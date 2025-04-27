#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Amine");
	zombie->announce();
	randomChump("Salmi");
	delete zombie;
	return (0);
}
