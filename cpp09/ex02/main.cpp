#include <iostream>
#include <string>
#include <vector>



int main(int ac, char **av) {
    if (ac <= 1)
    {
        std::cout << "bad arg !" << std::endl;
        return (1);
    }

    std::vector<int> V;
    std::vector<int> L;
    std::vector<int> S;
    char *end;
    for (int i = 1; i < ac; i++) {
        int res = strtod(av[i], &end);
        V.push_back(res);
    }

    // std::vector<int>::iterator it = V.begin();
    for (size_t i = 0; i + 1 < V.size(); i += 2) {
        if (V[i] > V[i + 1]) {
            L.push_back(V[i]);
            S.push_back(V[i + 1]);
        }
        else if (V[i] <= V[i + 1]) {
            L.push_back(V[i + 1]);
            S.push_back(V[i]);
        }
    }

    for (size_t i = 0; i + 1 < L.size(); i++)
    {
            if (L[i] > L[i + 1]) {
                int tmp = L[i];
                L[i] = L[i + 1];
                L[i + 1] = tmp;
            }
    }
    for (size_t i = 0; i < V.size(); i++) {
        int value = S[i];
        std::vector<int>::iterator pos = std::lower_bound(L.begin(), L.end(), value);
        L.insert(pos, value);
    }
    std::cout << "V before : ";
    for (size_t i = 0; i < V.size(); i++)
        std::cout << V[i] << " ";
    std::cout << std::endl;
    V = L;
    std::cout << "V after : ";
    for (size_t i = 0; i < V.size(); i++)
        std::cout << V[i] << " ";
    
}