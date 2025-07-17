#include <iostream>
#include <string>

template <typename T>

void swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
};

template <typename M>

const M &min(const M& a, const M& b) {
    return (a < b) ? a : b;
}

template <typename S>

const S &max(const S& a, const S& b) {
    return (a > b) ? a : b;
}