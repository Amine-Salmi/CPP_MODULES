#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
    (void)copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other) {
    (void)other;
    return (*this);
}


void ScalarConverter::convert(const std::string& literal) {
    Type type = getLiteralType(literal);

    switch (type)
    {
        case (0):
            convertChar(literal[1]);
            break;
        case (1):
            convertInt(literal);
            break;
        case (2):
            convertFloat(literal);
            break;
        case (3):
            convertDouble(literal);
            break;
        case (4):
            convertPseudo(literal);
            break;
        default:
            std::cout << "Error: input is not a recognizable char, int, float, double, or pseudo-literal" << std::endl;
            break;
    }
}

ScalarConverter::~ScalarConverter() {
}