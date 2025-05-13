#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() {
	ICharacter* player = new Character("player1");
	ICharacter* playe1 = new Character("player2");
	AMateria *ice = new Ice();
	AMateria *cure = new Cure(); 
	ice->use(*player);
	cure->use(*player);
	player->equip(ice);
	player->equip(cure);
	for (int i = 0; i < 4; i++) {
		if (player->getInventory()[i])
		{
			std::cout << "inv[" << i << "]: " << player->getInventory()[i]->getType() << std::endl;
		} else {
			std::cout << "inv[" << i << "]: Empty" << std::endl;
		}
	}
	player->use(0, *playe1);
}