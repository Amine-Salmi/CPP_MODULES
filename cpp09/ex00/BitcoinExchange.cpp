#include "BitcoinExchange.hpp"

std::string trim(std::string str) {
    size_t first = str.find_first_not_of(" \t");
    if (first == std::string::npos)
        return ("");
    size_t last = str.find_last_not_of(" \t");
    return (str.substr(first, last - first + 1));
}

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return (year % 400 == 0);
        }
        return (true);
    }
    return (false);
}

bool validRange(int year, int month, int days) {
    bool validYear = false;
    bool validMonth = false;
    bool validDay = false;
    if (month >= 1 && month <= 12)
        validMonth = true;

    std::time_t t = std::time(NULL);
    std::tm *now = std::localtime(&t);
    int currentYear = now->tm_year + 1900;
    if (year <= currentYear && year >= 1900)
        validYear = true;
    int maxDays = 0;
    switch (month)
    {
        case 1 : case 3 : case 5 : case 7 :
        case 8 : case 10 : case 12 :
            maxDays = 31;
            break;
        case 4 : case 6 : case 9 : case 11 :
            maxDays = 30;
            break;
        case 2 :
            if (isLeapYear(year))
                maxDays = 29;
            else
                maxDays = 28;
    }
    if (days >= 1 && days <= maxDays)
        validDay = true;
    if (validYear && validMonth && validDay)
        return (true);
    return (false);
}

bool BitcoinExchange::validAmount(double amount) {
    if (amount < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    if (amount > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

bool BitcoinExchange::validDate(const std::string& date) const{
    int count = 0;
    bool allNumber = true;
    for (unsigned int i = 0; i < date.length(); i++)
    {
        if (date[i] == '-')
            count++;
        if (!isdigit(date[i]) && date[i] != '-')
            allNumber = false;
    }
    if (date.length() != 10 || count != 2 || !allNumber)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    size_t firstCompenent  = date.find("-");
    size_t secondCompenent  = date.find("-", firstCompenent + 1);
    std::string strYear = date.substr(0, firstCompenent);
    std::string strMonth = date.substr(firstCompenent + 1, secondCompenent - firstCompenent - 1);
    std::string strDays = date.substr(secondCompenent + 1);

    int year = std::atoi(strYear.c_str()); // should be change to strtoi
    int month = std::atoi(strMonth.c_str()); // should be change to strtoi
    int days = std::atoi(strDays.c_str()); // should be change to strtoi

    if (!validRange(year, month, days))
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    return true;
}

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

void BitcoinExchange::processInput() {
    std::string line;
    std::ifstream dataFile("input.txt");
    getline(dataFile, line);
    while (getline(dataFile, line)) {
        std::stringstream str(line);
        std::string date;
        std::string a;
        getline(str, date, '|');
        getline(str, a);
        a = trim(a);
        if (a.empty())
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        char *end;
        double amount = strtod(a.c_str(), &end);
        if (*end != '\0')
        {
            std::cout << "Error: not a number."<< std::endl;;
            continue;
        }
        std::map<std::string, double>::iterator it;
        date = trim(date);
        std::cout << "date : [" << date << "]" << std::endl;
        if (validDate(date) && validAmount(amount)) {
            it  = this->_data.find(date);
            if (it != this->_data.end()) {
                std::cout << date << " => " << amount << " = " << amount * it->second << std::endl;
            }
        }
    }
}

void BitcoinExchange::printData() {
    for (std::map<std::string, double>::iterator it = this->_data.begin(); it != this->_data.end(); it++)
        std::cout << "date: " << it->first << ", id: " << it->second << std::endl;
}
