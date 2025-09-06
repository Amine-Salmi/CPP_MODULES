#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &copy) {
    (void)copy;
}

std::vector<int>& PmergeMe::getVecContainer() {
    return (this->vec);
}

std::deque<int>& PmergeMe::getDeqContainer() {
    return (this->deq);
}

PmergeMe::~PmergeMe() {
}