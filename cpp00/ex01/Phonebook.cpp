#include "Phonebook.hpp"

void PhoneBook::initIndex()
{
	index = 0;
	nbContact = 0;
}

void PhoneBook::setIndex()
{
	index = (index + 1) % 8;
	if (nbContact < 8)
		nbContact++;
}

int PhoneBook::getNbContact()
{
	return (nbContact);
}

void manipulate_string(const std::string &text)
{
	if (text.length() > 10)
		std::cout << std::setw(10) << text.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << text;
}

void PhoneBook::displayContact()
{
	std::string text;
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < nbContact; i++)
	{
		std::cout << std::setw(10) << i << "|";
		manipulate_string(contact[i].getContact(0));
		std::cout << "|";
		manipulate_string(contact[i].getContact(1));
		std::cout << "|";
		manipulate_string(contact[i].getContact(2));
		std::cout << std::endl;
	}
}

void PhoneBook::displayDetails(int index)
{
	std::cout << "First Name: " << contact[index].getContact(0) << std::endl;
	std::cout << "Last Name: " << contact[index].getContact(1) << std::endl;
	std::cout << "NickName: " << contact[index].getContact(2) << std::endl;
	std::cout << "Phone Number: " << contact[index].getContact(4) << std::endl;
	std::cout << "Darkest Secret: " << contact[index].getContact(3) << std::endl;
}

void PhoneBook::addContact()
{
	if (!contact[index].setContact())
		std::cout << "\033[32m" << "Contact Added successfully" << "\033[0m"<< std::endl;
}