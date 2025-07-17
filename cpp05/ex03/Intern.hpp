#pragma once

#include "AForm.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern &copy);
    ~Intern();

    Intern &operator=(const Intern &other);

    AForm *makeForm(const std::string name, const std::string target);

    class InvalidFormNameException : public std::exception {
    public:
        const char* what() const throw();
    };
};