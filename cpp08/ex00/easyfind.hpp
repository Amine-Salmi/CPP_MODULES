#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template <typename T>

typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it != container.end())
        std::cout << "value -> " << value << " found." << std::endl;
    else
    {
        throw std::out_of_range("value not found");
    }
    return (container.begin());
}