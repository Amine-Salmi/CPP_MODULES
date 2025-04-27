#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "Debugging... because life has too many errors." << std::endl;
}

void Harl::info( void )
{
	std::cout << "Info: Find what you love and let it kill you." << std::endl;
}

void Harl::warning( void )
{
	std::cout << "Warning: Life is too important to be taken seriously." << std::endl;
}

void Harl::error( void )
{
	std::cout << "Error: I can resist everything except temptation." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*funcPtr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(*funcPtr[i])();
	}
}