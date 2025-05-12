#include "Ice.hpp"

int main() {
	AMateria *A = new Ice();
	AMateria *b;
	b = A->clone();
	std::cout << "type: " << b->getType() << std::endl;
}