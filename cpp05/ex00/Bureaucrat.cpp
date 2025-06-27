#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
	std::cout << "init Consyructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	(void)copy;
	std::cout << "Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}

const std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}