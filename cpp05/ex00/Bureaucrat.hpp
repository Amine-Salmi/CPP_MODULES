#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat();
	
	const std::string getName() const;
	int getGrade() const;

	class GradeTooHighException: public std::exception {
	public:
		const char* what() const _NOEXCEPT {
			return ("Grade to high");
		}
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const _NOEXCEPT {
			return ("Grade to low");
		}
	};
};