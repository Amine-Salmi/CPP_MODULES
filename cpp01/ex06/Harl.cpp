#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[ Debugging ]\nBecause life has too many errors." << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ Info ]\nFind what you love and let it kill you." << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[Warning]\nLife is too important to be taken seriously." << std::endl;
}

void Harl::error( void )
{
	std::cout << "[Error]\nI can resist everything except temptation." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	for (; i < 4; i++)
	{
		if (level == levels[i])
			break;
	}
	switch (i)
	{
		case (0) :
			debug();
		case (1) :
			info();
		case (2) :
			warning();
		case (3) :
			error();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}