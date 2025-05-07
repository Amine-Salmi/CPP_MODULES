#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
private:
        bool isGuarding;
public:
        ScavTrap();
        ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap &copy);
        ~ScavTrap();

	ScavTrap &operator=(const ScavTrap &src);

        void attack(const std::string &target);
        void guardGate();
};