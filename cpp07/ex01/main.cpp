#include "iter.hpp"

template <typename E>
void printElement(const E& element) {
    std::cout << element << " ";
}

int main( void ) {
    int a[] = {3, 2, 1};
    size_t length = sizeof(a) / sizeof(a[0]);
    ::iter(a, length, printElement<int>);

    std::cout << "\n";
    char c[] = {'a', 'b', 'c'};
    size_t size = sizeof(c) / sizeof(c[0]);
    ::iter(c, size, printElement<char>);

    std::cout << "\n";
    std::string s[] = {"Hello", "Usa", "World!"};
    size_t string_size = sizeof(s) / sizeof(s[0]);
    ::iter(s, string_size, printElement<std::string>);
}