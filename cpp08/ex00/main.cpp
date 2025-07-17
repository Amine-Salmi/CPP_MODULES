#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> myV;
        myV.push_back(1);
        myV.push_back(42);
        myV.push_back(1337);
        ::easyfind(myV, 133);
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    // std::cout << "size: " << myV.size() << std::endl;
    // std::vector<int>::iterator it = std::find(myV.begin(), myV.end(), 432);
    // if (it == myV.end())
    //     std::cout << "not found" << std::endl;
    // else
    //     std::cout << "found" << std::endl;

    // for (std::vector<int>::iterator it = myV.begin(); it != myV.end(); ++it) {
    //     std::cout << *it << std::endl;
    // }
}