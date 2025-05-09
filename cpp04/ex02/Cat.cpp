#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default constructor for Cat is called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	this->brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->brain->setIdea(i, copy.brain->getIdea(i));
	}
	std::cout << "Copy constructor for Cat is called" << std::endl;
}

Cat &Cat::operator=(const Cat& src) {
	Animal::operator=(src);
	std::cout << "Assignment operator for Cat is called " << std::endl;
	return (*this);
}

void Cat::makeSound( void ) const {
	std::cout << "Cat: meowww!!" << std::endl;
}

void Cat::setIdea(int index, const std::string idea) {
	if (index >= 0 && index < 100)
		this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) {
	if (index < 0 || index > 100)
	{
		std::cout << "No Idea ...." << std::endl;
		return (NULL);
	}
	return (this->brain->getIdea(index));
}

Cat::~Cat() {
	std::cout << "Destructor for Cat is called" << std::endl;
}