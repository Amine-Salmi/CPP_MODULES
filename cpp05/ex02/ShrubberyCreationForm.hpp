#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
    const std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ~ShrubberyCreationForm();

    const std::string getTarget() const;

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

	void action() const;
};