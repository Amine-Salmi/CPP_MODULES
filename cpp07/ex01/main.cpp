#include "iter.hpp"

void printInt(const int i) {
    std::cout << i << " ";
}

void printChar(const char c) {
    std::cout << c << " ";
}

void printString(const std::string& s)
{
    std::cout << s << " ";
}

int main( void ) {
    int a[] = {3, 2, 1};
    size_t length = sizeof(a) / sizeof(a[0]);
    ::iter(a, length, printInt);

    std::cout << "\n";
    char c[] = {'a', 'b', 'c'};
    size_t size = sizeof(c) / sizeof(c[0]);
    ::iter(c, size, printChar);

    std::cout << "\n";
    std::string s[] = {"Hello", "Usa", "World!"};
    size_t string_size = sizeof(s) / sizeof(s[0]);
    ::iter(s, string_size, printString);
}