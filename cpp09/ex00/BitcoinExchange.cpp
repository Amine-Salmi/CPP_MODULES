#include "BitcoinExchange.hpp"

void BitcoinExchange::loadData() {
    std::string line;
    std::ifstream dataFile("data.csv");
    getline(dataFile, line);
    while (getline(dataFile, line)) {
        std::stringstream str(line);
        std::string date;
        std::string p;
        getline(str, date, ',');
        getline(str, p);
        char *end;
        double price = strtod(p.c_str(), &end);
        this->_data[date] = price;
    }
    dataFile.close();
}

void BitcoinExchange::parsInputFile() {
    std::string line;
    std::ifstream dataFile("input.txt");
    getline(dataFile, line);
    while (getline(dataFile, line)) {
        std::stringstream str(line);
        std::string date;
        std::string a;
        getline(str, date, '|');
        getline(str, a);
        char *end;
        double amount = strtod(a.c_str(), &end);
        // std::cout << "Date: " << date << ", Amount: " << amount << std::endl;
    }
}

void BitcoinExchange::printData() {
    for (std::map<std::string, double>::iterator it = this->_data.begin(); it != this->_data.end(); it++)
        std::cout << "date: " << it->first << ", id: " << it->second << std::endl;
}
