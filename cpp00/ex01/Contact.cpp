#include "Contact.hpp"

std::string manipulateString(const std::string &string)
{
	size_t start;
	size_t end;

	start = 0;
	while (start < string.length() && std::isspace(string[start])) {
		start++;
	}
	end = string.length();
	while (end > start && std::isspace(string[end - 1])) {
		end--;
	}
	return (string.substr(start, end - start));
}

bool isNumber(const std::string &string) 
{
	int i = 0;
	while (string[i])
	{
		if (!isdigit(string[i]) && string[i] != ' ')
			return (false);
		i++;
	}
	return (true);
}

int Contact::setContact()
{
	std::string value;
	do {
		std::cout << "Enter First Name: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return (1);
		FirstName = manipulateString(value);
	}
	while (FirstName.empty());

	do {
		std::cout << "Enter Last Name: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return (1);
		LastName = manipulateString(value);
	}
	while (LastName.empty());

	do {
		std::cout << "Enter Nick Name: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return (1);
		NickName = manipulateString(value);
	}
	while (NickName.empty());

	do {
		std::cout << "Enter Phone Number: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return (1);
		PhoneNumber = manipulateString(value);
	}
	while (PhoneNumber.empty() || !isNumber(PhoneNumber));

	do {
		std::cout << "Enter darkest Secret: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return (1);
		Secret = manipulateString(value);
	}
	while (Secret.empty());

	return (0);
}

std::string Contact::getContact(int status)
{
	if (status == 0)
		return (FirstName);
	if (status == 1)
		return (LastName);
	if (status == 2)
		return (NickName);
	if (status == 3)
		return (Secret);
	if (status == 4)
		return (PhoneNumber);
	return (NULL);
}
