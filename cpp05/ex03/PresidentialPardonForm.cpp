#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : target("") {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: AForm("Presiden Form", 25, 5), target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) 
: AForm(copy), target(copy.target) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    if (this == &other)
        AForm::operator=(other);
    return (*this);
}

const std::string PresidentialPardonForm::getTarget() const {
    return (this->target);
}

void PresidentialPardonForm::action() const {
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}