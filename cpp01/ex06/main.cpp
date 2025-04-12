#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "bad argument" << std::endl;
		return (1);
	}
	std::string level;
	Harl harl;
	level = av[1];
	harl.complain(level);
}