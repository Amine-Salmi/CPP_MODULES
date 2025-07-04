#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	const std::string name;
	bool isSigned;
	const int gradeToSigned;
	const int gradeToExecuted;
public:
	AForm();
	AForm(const std::string &name, int gradeToSigned, int gradeToExecuted);
	AForm(const AForm &copy);
	virtual ~AForm();

	AForm &operator=(const AForm &other);

	std::string getName() const;
	int getGradeToSigned() const;
	int	getGradeToExecuted() const;
	bool getIsSigned() const;

	void beSigned(Bureaucrat &b);

	void execute(Bureaucrat const & executor) const;
	virtual void action() const = 0;

	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw();
	};

	class FormNotSignedException: public std::exception {
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& cout, const AForm &obj);