#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
    const std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    ~PresidentialPardonForm();

    const std::string getTarget() const;

    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

    void action() const;
};