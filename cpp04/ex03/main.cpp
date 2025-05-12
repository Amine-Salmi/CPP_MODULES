#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() {
	ICharacter* player = new Character("player1");
	AMateria *ice = new Ice();
	AMateria *cure = new Cure(); 
	ice->use(*player);
	cure->use(*player);
	player->equip(ice);
}