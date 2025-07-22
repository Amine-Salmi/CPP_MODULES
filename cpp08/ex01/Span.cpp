#include "Span.hpp"

Span::Span() : _numbers(), N(0) {};

Span::Span(const int N) : _numbers() {
	if (N == 0)
		throw std::runtime_error("Span size cannot be zero");
	if (N < 0)
		throw std::runtime_error("Span size must be positive");
	this->N = static_cast<unsigned int>(N);

};

Span::Span(const Span& copy) : _numbers(copy._numbers) ,N(copy.N) {}

Span &Span::operator=(const Span& other) {
	if (this != &other)
	{
		this->N = other.N;
		this->_numbers = other._numbers;
	}
	return (*this);
}

Span::~Span() {};

void Span::addNumber(const int num) {
	if (this->_numbers.size() < this->N)
		_numbers.push_back(num);
	else
		throw std::out_of_range("Span is full: not all elements were added");
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	while (begin != end)
	{
		this->_numbers.push_back(*begin);
		begin++;
	}
}

unsigned int Span::shortestSpan() {
	if (this->_numbers.size() <= 1)
		throw std::runtime_error("Cannot compute span: not enough numbers stored");
	std::vector<int> arrResult = this->_numbers;
	std::sort(arrResult.begin(), arrResult.end());
	unsigned int minSpan = std::numeric_limits<unsigned int>::max();
	for (unsigned int i = 0; i < (arrResult.size() - 1); i++)
		minSpan = std::min(minSpan, static_cast<unsigned int>(arrResult[i + 1] - arrResult[i]));
	return (minSpan);
}

unsigned int Span::longestSpan() {
	if (this->_numbers.size() <= 1)
		throw std::runtime_error("Cannot compute span: not enough numbers stored");
	int max = *std::max_element(this->_numbers.begin(), this->_numbers.end());
	int min = *std::min_element(this->_numbers.begin(), this->_numbers.end());
	return (static_cast<unsigned int>(max - min));
}

int& Span::operator[](unsigned int index) {
	if (index >= this->_numbers.size())
		throw std::out_of_range("Index out of bounds");
	return (this->_numbers[index]);
}
