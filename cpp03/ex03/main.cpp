// #include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Shiny");
    
    diamond.attack("target");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();
    return 0;
}