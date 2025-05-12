#include "Ice.hpp"
#include "Character.hpp"

int main() {
	ICharacter* player = new Character("player1");
	AMateria *ice = new Ice();
	ice->use(*player);
}