#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("F1");

    frag.attack("target");
    frag.takeDamage(50);
    frag.beRepaired(30);
    frag.highFivesGuys();
    
    return 0;
}