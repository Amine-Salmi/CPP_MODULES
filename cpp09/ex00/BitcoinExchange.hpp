#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <sstream>
#include <ctime>

class BitcoinExchange {
private:
    std::map<std::string, double> _data;
    // std::string date;
    // float amount;
public:
    void loadData();
    void processInput();
    void printData();
    void validDate(const std::string& date) const;
    void validAmount(double amount);
    // proccessInput -> read the user input file and print Result;
    // 
};