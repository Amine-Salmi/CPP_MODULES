#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
	std::cout << "init Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	if (this != &copy)
		this->grade = copy.grade;
	std::cout << "Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}

const std::string Bureaucrat::getName() const {
	return (this->name);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}