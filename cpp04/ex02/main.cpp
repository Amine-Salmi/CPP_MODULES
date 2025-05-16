#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// Brain brain;
	// brain.setIdea(0, "Idea1");
	// brain.setIdea(1, "Idea2");
	// std::cout << "Idea1: " << brain.getIdea(0) << std::endl;
	// std::cout << "Idea2: " << brain.getIdea(1) << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	return 0;
}