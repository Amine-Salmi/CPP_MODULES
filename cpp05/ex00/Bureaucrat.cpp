#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(1) {
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	if (this != &copy)
		this->grade = copy.grade;
}

Bureaucrat::~Bureaucrat() {
}

const std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::incrementGrade() {
	if (this->getGrade() == 1)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->getGrade() == 150)
		throw GradeTooLowException();
	this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

std::ostream& operator<<(std::ostream& cout, const Bureaucrat& obj) {
	cout << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (cout);
}
