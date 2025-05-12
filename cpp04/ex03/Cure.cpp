#include "Cure.hpp"

Cure::Cure() : AMateria() {
	this->type = "cure";
	std::cout << "Default constructor for Cure is called" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type) {
	std::cout << "Constructor for Cure is called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy) {
	std::cout << "Copy constructor for Cure is called" << std::endl;
}

Cure &Cure::operator=(const Cure &src) {
	if (this == &src)
		return (*this);
	AMateria::operator=(src);
	return (*this);
}

AMateria *Cure::clone() const {
	std::cout << "Clone fucntion for Cure is called" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure(){
	std::cout << "Destructor for Cure is called" << std::endl;
}