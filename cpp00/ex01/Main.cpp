#include "Phonebook.hpp"

bool user_choice(std::string &choice)
{
	std::getline(std::cin, choice);
	if (std::cin.eof())
		return (false);
	if (choice.compare("ADD") && choice.compare("SEARCH") && choice.compare("EXIT"))
	{
		std::cout << "\033[31m" << "error: Bad option... !" << "\033[0m" << std::endl;
		return (false);
	}
	return (true);
}

int getValideIndex(int nbContact)
{
	int index;
	while (1)
	{
		std::cin >> index;
		if (std::cin.eof())
            return (-1);
		if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\033[31m" << "error: Bad option... !" << "\033[0m" << std::endl;
            return (-1);
        }
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index < 0 || index >= nbContact)
		{
			std::cout << "\033[31m" << "error: contact not found" << "\033[0m" << std::endl;
			break ;
		}
		else
			return (index);
	}
	return (-1);
}

int main()
{
	PhoneBook phonebook;
	std::string choice;
	int index;

	index = 0;
	phonebook.initIndex();
	while (!std::cin.eof())
	{
		std::cout << "-----------------------------" << std::endl;
		std::cout << "Choose one of these options: " << std::endl;
		std::cout << "ADD - SEARCH - EXIT" << std::endl;
		if (user_choice(choice) == false)
			continue;
		if (choice == "EXIT")
			return (0);
		if (choice == "ADD")
		{
			phonebook.addContact();
			phonebook.setIndex();
		}
		if (choice == "SEARCH")
		{
			phonebook.displayContact();
			std::cout << "Enter index : ";
			index = getValideIndex(phonebook.getNbContact());
			if (index == -1)
				continue;
			phonebook.displayDetails(index);
		}
	}
	std::cout << "\033[31m" << "EOF detected. Exiting the program. Goodbye!" << "\033[0m" << std::endl;
	return (0);
}
