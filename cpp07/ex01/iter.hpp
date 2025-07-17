#include <iostream>
#include <string>

template <typename T, typename F>

void iter(T *array, size_t lenght, F fun) {
    for (size_t i = 0; i < lenght; i++) {
        fun(array[i]);
    }
};