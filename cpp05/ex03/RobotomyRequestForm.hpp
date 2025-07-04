#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private:
    const std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    ~RobotomyRequestForm();

    const std::string getTarget() const;

    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

    void action() const;
};