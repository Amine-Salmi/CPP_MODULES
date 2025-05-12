#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string name;
public:
	Character();
	Character(const Character &copy);
	Character(std::string const &name);
	~Character();

	Character &operator=(const Character &src);
	std::string const &getName() const;
	// void equip(AMateria* m);
	// void unequip(int idx);
	// void use(int idx, ICharacter& target);
};