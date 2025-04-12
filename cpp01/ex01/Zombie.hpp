#pragma once

#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;
public:
	~Zombie();
	void setName(std::string name);
	void announce( void );
};

Zombie *zombieHorde(int N, std::string name);