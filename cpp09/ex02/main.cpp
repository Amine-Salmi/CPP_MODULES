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

template <typename container>
container generateJacobsthal(int size) {
    container jacob;

    jacob.push_back(0);
    jacob.push_back(1);
    while (1) {
        int result = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
        if (result >= size)
            break;
        jacob.push_back(result);
    } 
    return (jacob);
}

template <typename container>
void mergeSort(container& c) {
    container L, S;

    size_t size;
    if (c.size() <= 1)
        return;
    if (c.size() % 2 != 0)
        size = c.size() - 1;
    else
        size = c.size();

    for (size_t i = 0; i < size; i += 2) {
        if (c[i] > c[i + 1]) {
            L.push_back(c[i]);
            S.push_back(c[i + 1]);
        }
        else {
            L.push_back(c[i + 1]);
            S.push_back(c[i]);
        }
    }
    if (c.size() % 2 != 0)
        S.push_back(c.back());
    mergeSort(L);

    container jacobsthal = generateJacobsthal<container>(S.size());
    std::vector<bool> flags(S.size(), false);
    for (size_t i = 0; i < jacobsthal.size(); i++) {
        if (static_cast<size_t>(jacobsthal[i]) < S.size() && !flags[jacobsthal[i]]) {
            typename container::iterator pos = std::lower_bound(L.begin(), L.end(), S[jacobsthal[i]]);
            L.insert(pos, S[jacobsthal[i]]);
            flags[jacobsthal[i]] = true;
        }
    }

    for (size_t i = 0; i < S.size(); i++) {
        if (!flags[i]) {
            typename container::iterator pos = std::lower_bound(L.begin(), L.end(), S[i]);
            L.insert(pos, S[i]);
            flags[i] = true;
        }
    }
    c = L;
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
    mergeSort<std::vector<int> >(p.getContainer());

    for (size_t i = 0; i < p.getContainer().size(); i++) {
        std::cout << p.getContainer()[i] << " ";
    }
    std::cout << std::endl;
    return (0);
}