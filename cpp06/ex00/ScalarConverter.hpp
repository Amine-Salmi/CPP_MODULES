#pragma once

#include "utils.hpp"

class ScalarConverter {
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& copy);
    ~ScalarConverter();

    ScalarConverter &operator=(const ScalarConverter& other);
public:
    static void convert(const std::string& literal);
};