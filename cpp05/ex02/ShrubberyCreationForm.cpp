#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("") {
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
: AForm("Shrubbery Form", 145, 137), target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) 
: AForm(copy), target(copy.target) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this == &other)
        AForm::operator=(other);
    return (*this);
}

const std::string ShrubberyCreationForm::getTarget() const {
    return (this->target);
}

void ShrubberyCreationForm::action() const {
    std::ofstream ShrubberyFile(this->target + "__shrubbery");
    if (!ShrubberyFile)
        throw std::runtime_error("Failed to open file");
    ShrubberyFile << "               *\n";
    ShrubberyFile << "              ***\n";
    ShrubberyFile << "             *****\n";
    ShrubberyFile << "            *******\n";
    ShrubberyFile << "           *********\n";
    ShrubberyFile << "          ***********\n";
    ShrubberyFile << "         *************\n";
    ShrubberyFile << "        ***************\n";
    ShrubberyFile << "       *****************\n";
    ShrubberyFile << "      *******************\n";
    ShrubberyFile << "     *********************\n";
    ShrubberyFile << "    ***********************\n";
    ShrubberyFile << "             |||\n";
    ShrubberyFile << "             |||\n";
    ShrubberyFile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}   