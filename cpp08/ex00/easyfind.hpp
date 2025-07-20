#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template <typename T>

typename T::iterator easyfind(T& container, int value) {
    return (std::find(container.begin(), container.end(), value));
}
