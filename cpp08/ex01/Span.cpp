#include "Span.hpp"

Span::Span() : _numbers(), N(0) {
};

Span::Span(const int N) : _numbers(){
	if (N == 0)
		throw std::runtime_error("Span size cannot be zero");
	if (N < 0)
		throw std::runtime_error("Span size must be positive");
	this->N = static_cast<unsigned int>(N);
};

void Span::addNumber(const int num) {
	if (this->_numbers.size() < this->N)
		_numbers.push_back(num);
	else
		throw std::out_of_range("Span is full");
}

unsigned int Span::shortestSpan() {
	if (this->_numbers.empty() || this->_numbers.size() <= 1)
		throw std::runtime_error("empty span");
	
	return (0);
}

