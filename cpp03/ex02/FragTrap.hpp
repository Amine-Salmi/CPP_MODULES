#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();

	FragTrap &operator=(const FragTrap &src);
        
        void highFivesGuys(void);
};