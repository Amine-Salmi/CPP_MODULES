#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &copy) {
    (void)copy;
}

void PmergeMe::mergeSort() {
    std::vector<int> L, S;

    size_t size;
    if (this->numbers.size() <= 1)
        return;
    if (this->numbers.size() % 2 != 0)
        size = this->numbers.size() - 1;
    else
        size = this->numbers.size();

    for (size_t i = 0; i < size; i += 2) {
        if (this->numbers[i] > this->numbers[i + 1]) {
            L.push_back(this->numbers[i]);
            S.push_back(this->numbers[i + 1]);
        }
        else {
            L.push_back(this->numbers[i + 1]);
            S.push_back(this->numbers[i]);
        }
    }
    if (this->numbers.size() % 2 != 0)
        S.push_back(this->numbers.back());
    this->numbers = L;
    std::cout << "S: ";
    for (size_t i = 0; i < S.size(); i++ ) {
        std::cout << S[i] << " ";
    }
    mergeSort();
}

std::vector<int>& PmergeMe::getContainer() {
    return (this->numbers);
}

PmergeMe::~PmergeMe() {
}