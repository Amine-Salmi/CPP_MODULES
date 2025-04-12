#include <iostream>
#include <string>

class Contact {
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string Secret;
	std::string PhoneNumber;
public:
	int setContact();
	std::string getContact(int status);
};