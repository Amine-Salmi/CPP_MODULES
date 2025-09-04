#pragma once

#include <iostream>
#include <string>
#include <vector>

class PmergeMe {
private:
    std::vector<int> numbers;
public:
    PmergeMe();
    PmergeMe(const PmergeMe &copy);

    void mergeSort();
    std::vector<int>& getContainer();
    ~PmergeMe();
};