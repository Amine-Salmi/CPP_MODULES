#include "Span.hpp"

int main() {
	try {
	Span sp = Span(1);
	// sp.addNumber(17);
	// sp.addNumber(9); 
	// sp.addNumber(11);

	// std::cout << sp[-1] << std::endl;
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}