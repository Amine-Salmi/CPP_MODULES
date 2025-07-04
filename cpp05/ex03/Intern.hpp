#pragma once

#include "AForm.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern &copy);
    ~Intern();

    Intern &operator=(const Intern &other);

    AForm *makeForm(const std::string name, const std::string target);
};