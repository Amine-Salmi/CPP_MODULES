#include "utils.hpp"

bool isPseudoLiteral(const std::string& literal) {
    return (literal == "nan" || literal == "nanf"
            || literal == "+inf" || literal == "-inf" 
            || literal == "+inff" || literal == "-inff");
}

bool parseInt(const std::string& str, int& num) {
    errno = 0;
    char *end;
    long value = strtol(str.c_str(), &end, 10);
    if (*end != '\0' || errno == ERANGE || value > INT_MAX || value < INT_MIN)
        return (false);
    num = static_cast<int>(value);
    return (true);
}

bool parseFloat(const std::string& str, float& num) {
    errno = 0;
    char *end;
    double value = strtod(str.c_str(), &end);
    if (*end != 'f' || errno == ERANGE 
        || value > std::numeric_limits<float>::max() 
        || value < -std::numeric_limits<float>::max())
        return (false);
    num = static_cast<float>(value);
    return (true);
}

bool parseDouble(const std::string& str, double& num) {
    errno = 0;
    char *end;
    double value = strtod(str.c_str(), &end);
    if (*end != '\0' || errno == ERANGE)
        return (false);
    num = value;
    return (true);
}

void convertChar(const char& c) {
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << std::fixed << std::setprecision(1) << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void convertInt(const std::string& literal) {
    int num;
    if (parseInt(literal, num)) {
        if (num < 0 || num > 127)
           std::cout << "char: impossible" << std::endl;
        else if (!std::isprint(num))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
        std::cout << "int: " << num << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << std::endl;
    } else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

void convertFloat(const std::string& literal) {
    float num;
    if (parseFloat(literal, num)) {
        if (num >= std::numeric_limits<int>::max() || num <= std::numeric_limits<int>::min())
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
        } else {
            int i = static_cast<int>(num);
            if (i < 0 || i > 127)
                std::cout << "char: impossible" << std::endl;
            else if (!std::isprint(i))
                std::cout << "char: Non displayable" << std::endl; 
            else
                std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
            std::cout << "int: " << i << std::endl;
        }
        std::cout << "float: " << std::fixed << std::setprecision(1) << num << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << std::endl;
    } else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

void convertDouble(const std::string& literal) {
    double num;
    if (parseDouble(literal, num)) {
        if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min()) {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
        } else {
            int i = static_cast<int>(num);
            if (i < 0 || i > 127)
                std::cout << "char: impossible" << std::endl;
            else if (!std::isprint(i))
                std::cout << "char: Non displayable" << std::endl; 
            else
                std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
            std::cout << "int: " << i << std::endl;
        }
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
        std::cout << "double: " << num << std::endl;
    } else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

void convertPseudo(const std::string& literal) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;

    std::string floatValue;
    std::string doubleValue;
    if (literal == "nan" || literal == "nanf") {
        floatValue = "nanf";
        doubleValue = "nan";
    }
    else if (literal == "+inf" || literal == "+inff") {
        floatValue = "+inff";
        doubleValue = "+inf";
    }
    else if (literal == "-inf" || literal == "-inff") {
        floatValue = "-inff";
        doubleValue = "-inf";
    }
    std::cout << "float: " << floatValue << std::endl;
    std::cout << "double: " << doubleValue << std::endl;
}

Type getLiteralType(const std::string& literal) {
    if (literal.length() == 3 && literal.front() == '\'' 
    && literal.back() == '\'') {
        return (CHAR);
    }

    if (isPseudoLiteral(literal))
        return (PSEUDO);

    size_t i = 0;
    bool hasDot = false;
    bool hasDigit = false;
    bool hasF = false;

    if (literal[i] == '+' || literal[i] == '-')
        i++;

    for (; i < literal.length(); i++)
    {
        if (std::isdigit(literal[i]))
            hasDigit = true;
        else if (literal[i] == '.' && !hasDot)
            hasDot = true;
        else if (literal[i] == 'f' && i == (literal.length() - 1))
            hasF = true;
        else
            return (INVALID_TYPE);
    }

    if (!hasDigit)
        return (INVALID_TYPE);
    if (hasF)
        return (FLOAT);
    if (hasDot)
        return (DOUBLE);

    return (INT);
}