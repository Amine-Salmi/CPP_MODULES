#include "Bureaucrat.hpp"

int main() {
	Bureaucrat a("amine", 18);
	// Bureaucrat c("amine", 10);
	// Bureaucrat b;
	// b = a = c;
	std::cout << a;
	// try {
	// 	Bureaucrat::GradeTooHighException h;
	// 	Bureaucrat::GradeTooLowException l;
	// 	if (a.getGrade() < 1)
	// 		throw h;
	// 	if (a.getGrade() > 150)
	// 		throw l;
	// } catch (Bureaucrat::GradeTooHighException& e) {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// } catch (Bureaucrat::GradeTooLowException& l) {
	// 	std::cout << "Error: " << l.what() << std::endl;
	// }
}