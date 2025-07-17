#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 136);
        Bureaucrat alice("Alice", 130);

        ShrubberyCreationForm form("Home");

        std::cout << "\n--- Form Info Before Signing ---\n";
        std::cout << form << std::endl;

        std::cout << "\n--- Bob Tries to Sign the Form ---\n";
        bob.signForm(form);

        std::cout << "\n--- Alice Signs the Form ---\n";
        alice.signForm(form);

        std::cout << "\n--- Alice Executes the Form ---\n";
        alice.executeForm(form);
        std::cout << "\n--- Form Info After Execution ---\n";
        std::cout << form << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}


