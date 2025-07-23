#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <sstream>

class BitcoinExchange {
private:
    std::map<std::string, double> _data;
    // std::string date;
    // float amount;
public:
    void loadData();
    void parsInputFile();
    void printData(); // loadData function -> load the Data.csv to container;
    // proccessInput -> read the user input file and print Result;
    // 
};