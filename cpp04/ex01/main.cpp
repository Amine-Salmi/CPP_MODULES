#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog a;
	a.setIdea(0, "hello world");
	Dog b = a;
	std::cout << "Idea: " << b.getIdea(1) << std::endl;
	
}