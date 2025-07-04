#include "Bureaucrat.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat a("Alice", 1);
        Bureaucrat b("Bob", 150);

        std::cout << a << std::endl;
        std::cout << b << std::endl;

        std::cout << "Trying to increment Alice (grade 1)..." << std::endl;
        a.incrementGrade();
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        std::cout << "Creating Charlie with invalid grade 200..." << std::endl;
        Bureaucrat c("Charlie", 200);
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
	
    try {
        Bureaucrat d("Diana", 2);
        std::cout << d << std::endl;
        std::cout << "Decrementing Diana's grade (2 -> 3)..." << std::endl;
        d.decrementGrade();
        std::cout << d << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

