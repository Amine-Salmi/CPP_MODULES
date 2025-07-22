#include "Span.hpp"

int main() {
	try {
		std::vector<int> v;
		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);
		v.push_back(50);
		// v.push_back(1337);
		// v.push_back(200);

		Span sp = Span(5);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		sp.addNumber(v.begin(), v.end());
		for (int i = 0; i < 5; i++)
			std::cout << "[" << i << "]: " << sp[i] << std::endl;


		std::cout << sp.shortestSpan() << std::endl; 
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}