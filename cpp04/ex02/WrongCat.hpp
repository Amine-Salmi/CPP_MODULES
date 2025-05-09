#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public: 
	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat(const std::string& name);
	~WrongCat();

	WrongCat &operator=(const WrongCat& copy);

	void makeSound( void ) const;
};