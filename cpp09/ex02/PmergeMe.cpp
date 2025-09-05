#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &copy) {
    (void)copy;
}

// template <typename container>
// container PmergeMe::generateJacobsthal(int size) {
//     container jacob;

//     jacob.push_back(0);
//     jacob.push_back(1);
//     while (1) {
//         int result = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
//         if (result >= size)
//             break;
//         jacob.push_back(result);
//     } 
//     return (jacob);
// }

// void PmergeMe::mergeSort() {
//     std::vector<int> L, S;

//     size_t size;
//     if (this->vec.size() <= 1)
//         return;
//     if (this->vec.size() % 2 != 0)
//         size = this->vec.size() - 1;
//     else
//         size = this->vec.size();

//     for (size_t i = 0; i < size; i += 2) {
//         if (this->vec[i] > this->vec[i + 1]) {
//             L.push_back(this->vec[i]);
//             S.push_back(this->vec[i + 1]);
//         }
//         else {
//             L.push_back(this->vec[i + 1]);
//             S.push_back(this->vec[i]);
//         }
//     }
//     if (this->vec.size() % 2 != 0)
//         S.push_back(this->vec.back());
//     this->vec = L;
//     mergeSort();

//     std::vector<int> jacobsthal = generateJacobsthal(S.size());
//     std::vector<int> flags(S.size(), false);
//     for (size_t i = 0; i < jacobsthal.size(); i++) {
//         if (static_cast<size_t>(jacobsthal[i]) < S.size() && !flags[jacobsthal[i]]) {
//             std::vector<int>::iterator pos = std::lower_bound(L.begin(), L.end(), S[jacobsthal[i]]);
//             L.insert(pos, S[jacobsthal[i]]);
//             flags[jacobsthal[i]] = true;
//         }
//     }

//     for (size_t i = 0; i < S.size(); i++) {
//         if (!flags[i]) {
//             std::vector<int>::iterator pos = std::lower_bound(L.begin(), L.end(), S[i]);
//             L.insert(pos, S[i]);
//             flags[i] = true;
//         }
//     }
//     this->vec = L;
// }

// template <typename container>
// void PmergeMe::mergeSort(container& c) {
//     container L, S;

//     size_t size;
//     if (c.size() <= 1)
//         return;
//     if (c.size() % 2 != 0)
//         size = c.size() - 1;
//     else
//         size = c.size();

//     for (size_t i = 0; i < size; i += 2) {
//         if (c[i] > c[i + 1]) {
//             L.push_back(c[i]);
//             S.push_back(c[i + 1]);
//         }
//         else {
//             L.push_back(c[i + 1]);
//             S.push_back(c[i]);
//         }
//     }
//     if (c.size() % 2 != 0)
//         S.push_back(c.back());
//     mergeSort(L);

//     container jacobsthal = generateJacobsthal(S.size());
//     container flags(S.size(), false);
//     for (size_t i = 0; i < jacobsthal.size(); i++) {
//         if (static_cast<size_t>(jacobsthal[i]) < S.size() && !flags[jacobsthal[i]]) {
//             typename container::iterator pos = std::lower_bound(L.begin(), L.end(), S[jacobsthal[i]]);
//             L.insert(pos, S[jacobsthal[i]]);
//             flags[jacobsthal[i]] = true;
//         }
//     }

//     for (size_t i = 0; i < S.size(); i++) {
//         if (!flags[i]) {
//             typename container::iterator pos = std::lower_bound(L.begin(), L.end(), S[i]);
//             L.insert(pos, S[i]);
//             flags[i] = true;
//         }
//     }
//     c = L;
// }

std::vector<int>& PmergeMe::getContainer() {
    return (this->vec);
}

PmergeMe::~PmergeMe() {
}