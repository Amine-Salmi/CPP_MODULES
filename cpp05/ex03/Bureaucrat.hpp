#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat& other);

	const std::string getName() const;
	int getGrade() const;

	void signForm(AForm &f);
	void executeForm(AForm const & form) const;

	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& cout, const Bureaucrat& obj);