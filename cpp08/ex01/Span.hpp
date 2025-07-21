#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span {
private:
	std::vector<int> _numbers;
	unsigned int N;
public:
	Span();
	Span(const int N);
	Span(const Span& copy);
	~Span();

	Span& operator=(const Span& other);
	int& operator[](unsigned int index);

	void addNumber(const int num);
	unsigned int shortestSpan();
	unsigned int longestSpan();

};