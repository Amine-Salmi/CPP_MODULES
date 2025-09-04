#include "PmergeMe.hpp"

int myStoi(char *str) {
    char *end;
    int n = strtol(str, &end, 10);
    if (*end != '\0' || end == str)
        return (-1);
    if (errno == ERANGE || n > INT_MAX || n < 0)
        return (-1);
    return (n);
}

int fill_container(PmergeMe &p, char **av) {
    int i = 1;
    while (av[i]) {
        if (myStoi(av[i]) == -1)
            return (-1);
        p.getContainer().push_back(myStoi(av[i]));
        i++;
    }
    return (0);
}

int main(int ac, char **av) {
    if (ac <= 1) {
        std::cerr << "Error: bad arg !" << std::endl;
        return (1);
    }
    PmergeMe p;
    if (fill_container(p, av) == -1) {
        std::cerr << "Error: bad arg !" << std::endl;
        return (1);    
    };
    p.mergeSort();
    // for (size_t i = 0; i < p.getContainer().size(); i++)
    // {
    //     std::cout << "---> " << p.getContainer()[i] << "  " ;
    // }
    std::cout << std::endl;
    return (0);
}