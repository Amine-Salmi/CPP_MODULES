#pragma once

#include <iostream>
#include <string>
#include <exception>

class Form {
private:
	const std::string name;
	bool isSigned;
	int gradeToSigned;
	int gradeToExecuted;
public:
	Form();
	Form(const std::string &name, int isSigned, int gradeToSigned, int gradeToExecuted);
	Form(const Form &copy);
	~Form();
	
	class GradeTooHighException: public std::exception {
	public:
		const char* what() const throw() {
			return ("Grade to high");
		}
	};

	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw() {
			return ("Grade to low");
		}
	};
};