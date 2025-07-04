#include "AForm.hpp"

AForm::AForm() 
: name(""), isSigned(false), gradeToSigned(1), gradeToExecuted(1) {
}

AForm::AForm(const std::string &name, const int gradeToSigned, const int gradeToExecuted) 
: name(name), isSigned(false), gradeToSigned(gradeToSigned), gradeToExecuted(gradeToExecuted) {
    if (this->gradeToSigned < 1 || this->gradeToExecuted < 1)
        throw GradeTooHighException();
    if (this->gradeToSigned > 150 || this->gradeToExecuted > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &copy) 
: name(copy.name), isSigned(copy.isSigned), gradeToSigned(copy.gradeToSigned), gradeToExecuted(copy.gradeToExecuted) {
}

AForm &AForm::operator=(const AForm& other) {
    if (this != &other)
        this->isSigned = other.isSigned;
    return (*this);
}

std::string AForm::getName() const {
    return (this->name);
}

int AForm::getGradeToSigned() const {
    return (this->gradeToSigned);
}

int AForm::getGradeToExecuted() const {
    return (this->gradeToExecuted);
}

bool AForm::getIsSigned() const {
    return (this->isSigned);
}

void AForm::beSigned(const Bureaucrat &b) {
    if (b.getGrade() > this->gradeToSigned)
        throw GradeTooLowException();
    this->isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const {
    if (!this->getIsSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecuted())
        throw GradeTooLowException();
    this->action();
}

const char *AForm::GradeTooHighException::what() const throw () {
	return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw () {
	return ("Grade is too low");
}

const char *AForm::FormNotSignedException::what() const throw () {
    return ("From not signed");
}

AForm::~AForm() {
}

std::ostream& operator<<(std::ostream& cout, const AForm &obj) {
    cout << obj.getName() << ", signed: " << obj.getIsSigned()
    << ", sign grade: " << obj.getGradeToSigned() << ", execute grade: "
    << obj.getGradeToExecuted() << ".";
    return (cout);
}