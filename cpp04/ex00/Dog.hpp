#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &copy);
	Dog(const std::string &name);
	~Dog();

	Dog &operator=(const Dog &src);
};