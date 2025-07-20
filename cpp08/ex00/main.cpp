#include "easyfind.hpp"

template <typename c>
void testEasyFind(const std::string& name, c& container, int value) {
    std::cout << "Testing " << name << " with value: " << value << "\n";

    typename c::iterator it = easyfind(container, value);
    if (it != container.end())
        std::cout << "Found: " << *it << "\n";
    else
        std::cout << "Not found\n";

    std::cout << "-----------------------------\n";
}

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(15);
    lst.push_back(25);

    std::deque<int> deq;
    deq.push_back(42);
    deq.push_back(1337);
    deq.push_back(7);

    
    testEasyFind("std::vector", vec, 20);
    testEasyFind("std::vector", vec, 99);

    testEasyFind("std::list", lst, 15);
    testEasyFind("std::list", lst, 999);

    testEasyFind("std::deque", deq, 1337);
    testEasyFind("std::deque", deq, 1);  

    return 0;
}