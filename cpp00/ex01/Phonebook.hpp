#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include <locale>
#include "Contact.hpp"

class PhoneBook {
private:
	Contact contact[8];
	int index;
	int nbContact;

public:
	void addContact();
	void displayContact();
	void displayDetails(int index);
	void initIndex();
	void setIndex();
	int getNbContact();
};