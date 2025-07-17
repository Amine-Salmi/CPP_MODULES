#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern &copy) {
    *this = copy;
}


Intern &Intern::operator=(const Intern &other) {
    if (this == &other)
        return (*this);
    return (*this);
}


Intern::~Intern() {
}

AForm *makeShrubberyCreation(const std::string &target) {
    return (new ShrubberyCreationForm(target));
}

AForm *makeRobotomyRequest(const std::string &target) {
    return (new RobotomyRequestForm(target));
}


AForm *makePresidentialPardon(const std::string &target) {
    return (new PresidentialPardonForm(target));
}

const char *Intern::InvalidFormNameException::what() const throw() {
    return ("invalid name");
}

AForm *Intern::makeForm(const std::string name, const std::string target) {
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    typedef AForm* (*PtrFunc)(const std::string &target);
    
    PtrFunc ptr[] = {
        &makeShrubberyCreation,
        &makeRobotomyRequest,
        &makePresidentialPardon
    };

    for (int i = 0; i < 3 ; i++) {
        if (name == formNames[i])
        {
            std::cout << "Intern creates " << formNames[i] << std::endl;
            return ptr[i](target);
        }
    }
    throw InvalidFormNameException();
}