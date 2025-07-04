#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Intern someRandomIntern;
    Bureaucrat boss("Alice", 1); // High-grade bureaucrat

    AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "Garden");
    AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Trillian");
    // AForm* form4 = someRandomIntern.makeForm("invalid form", "Nobody");

    std::cout << "\n--- Signing and Executing Forms ---\n";

    if (form1) {
        boss.signForm(*form1);
        boss.executeForm(*form1);
        delete form1;
    }
    if (form2) {
        boss.signForm(*form2);
        boss.executeForm(*form2);
        delete form2;
    }
    if (form3) {
        boss.signForm(*form3);
        boss.executeForm(*form3);
        delete form3;
    }

    return 0;
}
