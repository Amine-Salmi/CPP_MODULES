#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

enum Type {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    PSEUDO,
    INVALID_TYPE
};

bool isPseudoLiteral(const std::string& literal);
bool parseInt(const std::string& str, int& num);
bool parseFloat(const std::string& str, float& num);
bool parseDouble(const std::string& str, double& num);


void convertChar(const char& c);
void convertInt(const std::string& literal);
void convertFloat(const std::string& literal);
void convertDouble(const std::string& literal);
void convertPseudo(const std::string& literal);

Type getLiteralType(const std::string& literal);