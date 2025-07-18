#include "Form.hpp"

Form::Form() 
: name(""), isSigned(false), gradeToSigned(1), gradeToExecuted(1) {
}

Form::Form(const std::string &name, const int gradeToSigned, const int gradeToExecuted) 
: name(name), isSigned(false), gradeToSigned(gradeToSigned), gradeToExecuted(gradeToExecuted) {
    if (this->gradeToSigned < 1 || this->gradeToExecuted < 1)
        throw GradeTooHighException();
    if (this->gradeToSigned > 150 || this->gradeToExecuted > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &copy) 
: name(copy.name), isSigned(copy.isSigned), gradeToSigned(copy.gradeToSigned), gradeToExecuted(copy.gradeToExecuted) {

}

Form &Form::operator=(const Form& other) {
    if (this != &other)
        this->isSigned = other.isSigned;
    return (*this);
}

std::string Form::getName() const {
    return (this->name);
}


int Form::getGradeToSigned() const {
    return (this->gradeToSigned);
}

int Form::getGradeToExecuted() const{
    return (this->gradeToExecuted);
}

bool Form::getIsSigned() const{
    return (this->isSigned);
}

void Form::beSigned(const Bureaucrat &b) {
    if (b.getGrade() > this->gradeToSigned)
        throw GradeTooLowException();
    this->isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw () {
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw () {
	return ("Grade is too low");
}

Form::~Form() {
}

std::ostream& operator<<(std::ostream& cout, const Form &obj) {
    cout << obj.getName() << ", signed: " << obj.getIsSigned()
    << ", sign grade: " << obj.getGradeToSigned() << ", execute grade: "
    << obj.getGradeToExecuted() << ".";
    return (cout);
}