#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("") {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: AForm("Robotomy Form", 72, 45), target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) 
: AForm(copy), target(copy.target) {
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this == &other)
        AForm::operator=(other);
    return (*this);
}

const std::string RobotomyRequestForm::getTarget() const {
    return (this->target);
}

void RobotomyRequestForm::action() const {
    srand(time(0));
    if (rand() % 2 == 0)
        std::cout << "BZZZZZZZ... DRILLING NOISES... " 
        << this->target << " has been robotomized successfully!" << std::endl; 
    else
        std::cout << "Bzzzz... Bzzzz... Robotomy failed on " 
        << this->target << "." << std::endl;     
}

RobotomyRequestForm::~RobotomyRequestForm() {
}