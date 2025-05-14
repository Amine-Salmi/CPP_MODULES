#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Default constructor for MateriaSourc" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	(void) copy;
	std::cout << "Copy constructor for MateriaSourc" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
	(void) src;
	std::cout << "assg operator for MateriaSourc" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	if (!m) {
		std::cout << "Cannot learn a null Materia!" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->learnInventory[i] == NULL) { 
			this->learnInventory[i] = m->clone();
			std::cout << "Learned Materia of type: " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource storage is full!" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->learnInventory[i] && this->learnInventory[i]->getType() == type)
			return (this->learnInventory[i]->clone());
	}
	std::cout << "Materia of type " << type << " is not known!" << std::endl;
	return (nullptr);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->learnInventory[i])
			delete this->learnInventory[i];
	}
	std::cout << "Destructor for MateriaSourc" << std::endl;
}