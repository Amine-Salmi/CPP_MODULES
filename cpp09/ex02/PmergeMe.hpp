#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

class PmergeMe {
private:
    std::vector<int> vec;
    std::deque<int> deq;
    
public:
    PmergeMe();
    PmergeMe(const PmergeMe &copy);

    // void mergeSort();
    // template <typename container>
    // void mergeSort(container& c);

    // template <typename container>
    // container generateJacobsthal(int size);

    std::vector<int>& getContainer();
    ~PmergeMe();
};