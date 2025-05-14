#pragma once

#include "IMateriaSource.hpp"

class MateriaSource
{
private:
    AMateria *learnInventory[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy);
    ~MateriaSource();

    MateriaSource &operator=(const MateriaSource &src);

    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const &type);
};