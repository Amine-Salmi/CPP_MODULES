#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	for (int i = 0; i < 4; i++) {
		if (me->getInventory()[i])
		{
			std::cout << "my power [" << i << "]: " << me->getInventory()[i]->getType() << std::endl;
		} else {
			std::cout << "my power [" << i << "]: Empty" << std::endl;
		}
	}
	// bob = me;
	std::cout << "--------------------" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (bob->getInventory()[i])
		{
			std::cout << "bob power [" << i << "]: " << bob->getInventory()[i]->getType() << std::endl;
		} else {
			std::cout << "bob power [" << i << "]: Empty" << std::endl;
		}
	}
	delete bob;
	delete me;
	delete src;
	return 0;
	// ICharacter* player1 = new Character("player1");
	// ICharacter* player2;
	// player2 = player1;
	// AMateria *ice = new Ice();
	// AMateria *cure = new Cure();
	// MateriaSource source;

	// source.learnMateria(ice);
	// source.learnMateria(cure);
	// ice->use(*player1);
	// cure->use(*player1);
	// player1->equip(ice);
	// player1->equip(cure);
	// player2->unequip(1);
	// for (int i = 0; i < 4; i++) {
	// 	if (player2->getInventory()[i])
	// 	{
	// 		std::cout << "inv for copy player [" << i << "]: " << player2->getInventory()[i]->getType() << std::endl;
	// 	} else {
	// 		std::cout << "inv for copy player [" << i << "]: Empty" << std::endl;
	// 	}
	// }
	// std::cout << "-------------------------" << std::endl;
	// for (int i = 0; i < 4; i++) {
	// 	if (player1->getInventory()[i])
	// 	{
	// 		std::cout << "inv for org player [" << i << "]: " << player1->getInventory()[i]->getType() << std::endl;
	// 	} else {
	// 		std::cout << "inv for org player [" << i << "]: Empty" << std::endl;
	// 	}
	// }
	// player1->use(0, *player2);
	// return (0);
}