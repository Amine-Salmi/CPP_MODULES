#pragma once

#include <iostream>
#include <string>

class Weapon {
private:
	std::string type;
public:
	void setType(std::string type);
	std::string getType( void );
	Weapon(std::string Weapon);
};