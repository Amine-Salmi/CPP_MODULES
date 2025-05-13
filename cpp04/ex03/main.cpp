#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() {
	ICharacter* player1 = new Character("player1");
	ICharacter* player2 = player1;
	AMateria *ice = new Ice();
	AMateria *cure = new Cure(); 
	ice->use(*player1);
	cure->use(*player1);
	player1->equip(ice);
	player1->equip(cure);
	player2->unequip(1);
	for (int i = 0; i < 4; i++) {
		if (player2->getInventory()[i])
		{
			std::cout << "inv for copy player [" << i << "]: " << player2->getInventory()[i]->getType() << std::endl;
		} else {
			std::cout << "inv  for copy player [" << i << "]: Empty" << std::endl;
		}
	}
	std::cout << "-------------------------" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (player1->getInventory()[i])
		{
			std::cout << "inv  for org player [" << i << "]: " << player1->getInventory()[i]->getType() << std::endl;
		} else {
			std::cout << "inv  for org player [" << i << "]: Empty" << std::endl;
		}
	}
	player1->use(0, *player2);
}