#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
private:
        bool isGuarding;
public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate();
};