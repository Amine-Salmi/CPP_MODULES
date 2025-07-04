#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string name;
	bool isSigned;
	const int gradeToSigned;
	const int gradeToExecuted;
public:
	Form();
	Form(const std::string &name, int gradeToSigned, int gradeToExecuted);
	Form(const Form &copy);
	virtual ~Form();

	Form &operator=(const Form &other);

	std::string getName() const;
	int getGradeToSigned() const;
	int	getGradeToExecuted() const;
	bool getIsSigned() const;

	void beSigned(const Bureaucrat &b);

	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& cout, const Form &obj);