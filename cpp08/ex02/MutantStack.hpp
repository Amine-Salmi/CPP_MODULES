#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
private:
	T* _container;
	unsigned int _size;
public:
	MutantStack() : _container(nullptr), _size(0) {};
	MutantStack(int size) : _size(size) {
		if (size <= 0)
			throw ()
	};
};