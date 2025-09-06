#include <iostream>
#include <string>
#include <stack>
#include <sstream>

class RPN {
private:
    std::stack<int> _stack;
public:
    void parsArg(std::string av);
};