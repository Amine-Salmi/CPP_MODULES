#include "Zombie.hpp"

int main()
{
	Zombie *zombie = zombieHorde(5, "Amine");
	delete[] zombie;
	return (0);
}