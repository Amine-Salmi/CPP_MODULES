#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("S1");
    
    scav.attack("enemy");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
    
    return 0;
}