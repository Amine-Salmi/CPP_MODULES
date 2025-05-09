#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
	std::cout << "Default constructor for Brain is called" << std::endl;
}

Brain::Brain(const std::string &ideas) {
	this->ideas[0] = ideas;
	for (int i = 1; i < 100; i++)
		this->ideas[i] = "";
	std::cout << "Constructor for Brain is called" << std::endl;
}

Brain::Brain(const Brain &copy) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = copy.ideas[i];
    }
	std::cout << "Copy constructor for Brain is called" << std::endl;
}

Brain &Brain::operator=(const Brain& src) {
	if (this != &src)
	{
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = src.ideas[i];
		}
	}
	std::cout << "Assignment operator for Brain is called " << std::endl;
	return (*this);
}

void Brain::setIdea(int index, const std::string idea) {
	if (index < 100 && index >= 0)
	{
		this->ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) {
	if (index < 0 || index > 100)
	{
		std::cout << "No Idea ...." << std::endl;
		return (NULL);
	}
	return (this->ideas[index]);
}

Brain::~Brain() {
	std::cout << "Destructor for brain is called" << std::endl;
}