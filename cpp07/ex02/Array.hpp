#pragma once

#include <iostream>
#include <string>

template <typename T>

class Array {
private:
    T *arr;
    unsigned int arrSize;
public: 
    Array() : arr(nullptr), arrSize(0) {
    };

    Array(unsigned int n) : arrSize(n) {
        if (this->arrSize == 0)
            this->arr = nullptr;
        else
            this->arr = new T[arrSize]();
    }

    Array(const Array& copy) : arrSize(copy.arrSize) {
        if (this->arrSize == 0)
            this->arr = nullptr;
        else {
            this->arr = new T[this->arrSize]();
            for (unsigned int i = 0; i < this->arrSize; i++) {
                this->arr[i] = copy.arr[i];
            }
        }
    };

    ~Array() {
        delete[] this->arr;
    };

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] this->arr;
            this->arrSize = other.arrSize;
            if (this->arrSize == 0)
                this->arr = nullptr;
            else {
                this->arr = new T[this->arrSize]();
                for (unsigned int i = 0; i < this->arrSize; i++) {
                    this->arr[i] = other.arr[i];
                }
            }
        }
        return (*this);
    };

    T& operator[](unsigned int index) {
        if (index >= this->arrSize)
            throw std::out_of_range("Index out of bounds");
        return (this->arr[index]);
    }

    const T& operator[](unsigned int index) const {
        if (index >= this->arrSize)
            throw std::out_of_range("Index out of bounds");
        return (this->arr[index]); 
    }

    unsigned int size() const {
        return (this->arrSize);
    }
};