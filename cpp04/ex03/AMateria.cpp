#include "AMateria.hpp"

AMateria::AMateria() {
	this->type = "";
	std::cout << "Default constructor for AMateria is called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
	this->type = copy.type;
	std::cout << "Copy constructor for AMateria is called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
	std::cout << "Constructor for AMateria is called" << std::endl;
}

std::string const &AMateria::getType() const {
	return (this->type);
}

AMateria &AMateria::operator=(const AMateria &src) {
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "Destructor for AMateria is called" << std::endl;
}