#include "Span.hpp"

int main() {
	try {
		Span span(4);
		span.addNumber(1);
		span.addNumber(2);
		span.shortestSpan();
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}