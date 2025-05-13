#include "IMateriaSource"

class MateriaSource
{
public:
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
}