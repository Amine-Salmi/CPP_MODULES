#include "Ice.hpp"

Ice::Ice() : AMateria() {
	this->type = "ice";
	std::cout << "Default constructor for Ice is called" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type) {
	std::cout << "Constructor for Ice is called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy) {
	std::cout << "Copy constructor for Ice is called" << std::endl;
}

Ice &Ice::operator=(const Ice &src) {
	if (this == &src)
		return (*this);
	AMateria::operator=(src);
	return (*this);
}
AMateria *Ice::clone() const {
	std::cout << "Clone fucntion for Ice is called" << std::endl;
	return (new Ice(*this));
}

Ice::~Ice() {
	std::cout << "Destructor for Ice is called" << std::endl;
}