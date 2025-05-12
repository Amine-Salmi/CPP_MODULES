#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const &getName() const = 0;
	// virtual void equip(AMateria* m) = 0;
	// virtual void unequip(int idx) = 0;
	// virtual void use(int idx, ICharacter& target) = 0;
};

class Character : ICharacter {
private:
	std::string name;
public:
	Character();
	Character(const Character &copy);
	~Character();

	std::string const &getName() const;
	// void equip(AMateria* m);
	// void unequip(int idx);
	// void use(int idx, ICharacter& target);
};