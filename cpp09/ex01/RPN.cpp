#include "RPN.hpp"

bool isNumber(const std::string& token) {
    for (size_t i = 0; i < token.size(); i++) {
        if (!isdigit(token[i]))
            return false;
    }
    return true;
}

bool isOperator(const std::string& token) {
    return (token == "*" || token == "/"
        || token == "+" || token == "-");
}

void RPN::parsArg(std::string av) {
    std::stringstream ss(av);
    std::string token;
    int result = 0;
    while (ss >> token) {
        if (isNumber(token))
        {
            int num = strtod(token.c_str(), NULL);
            _stack.push(num);
        }
        else if (isOperator(token)) {
            if (_stack.size() < 2)
                throw std::runtime_error("Error: not enough operands");
            int a = _stack.top();
            _stack.pop();
            int b = _stack.top();
            _stack.pop();
            if (token == "*")
                result = b * a;
            else if (token == "/") {
                if (a == 0)
                    throw std::runtime_error("Error: division by zero");
                result = b / a;            
            }
            else if (token == "+")
                result = b + a;            
            else if (token == "-")
                result = b - a;
            _stack.push(result);
        }
        else
            throw std::runtime_error("Error: invalid '" + token + "'");
    }
    if (_stack.size() != 1)
        throw std::runtime_error("Error: bad expression");
    std::cout << result << std::endl;
}