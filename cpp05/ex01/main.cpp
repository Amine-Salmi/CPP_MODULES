#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat alice("Alice", 50);
        Bureaucrat bob("Bob", 120);

        Form formA("FormA", 100, 100);  // Needs grade <= 100 to sign

        std::cout << alice << std::endl;
        std::cout << bob << std::endl;
        std::cout << formA << std::endl;

        std::cout << "\nBob tries to sign FormA:" << std::endl;
        bob.signForm(formA);  // Should fail

        std::cout << "\nAlice tries to sign FormA:" << std::endl;
        alice.signForm(formA);  // Should succeed

        std::cout << "\nFormA after signing attempts:" << std::endl;
        std::cout << formA << std::endl;

    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Testing invalid form (too high or too low grade)
    try {
        Form badForm("BadForm", 0, 150);  // Invalid: grade too high
    } catch (std::exception &e) {
        std::cerr << "Exception while creating BadForm: " << e.what() << std::endl;
    }

    try {
        Form badForm2("BadForm2", 100, 151);  // Invalid: grade too low
    } catch (std::exception &e) {
        std::cerr << "Exception while creating BadForm2: " << e.what() << std::endl;
    }

    return 0;
}

