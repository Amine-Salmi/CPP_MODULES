#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac != 2)
    {
        std::cout << "Error: bad arg" << std::endl;
        return (1);
    }
    try
    {
        RPN obj;
        obj.parsArg(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}