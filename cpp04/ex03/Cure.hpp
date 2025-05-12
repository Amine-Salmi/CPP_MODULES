#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(std::string const &type);
	Cure(const Cure &copy);
	~Cure();

	Cure &operator=(const Cure &src);
	AMateria* clone() const;
    void use(ICharacter& target);
};