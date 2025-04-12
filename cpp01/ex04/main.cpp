#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

std::string my_replace(std::string str, std::string search, std::string replace)
{
	size_t pos_search = str.find(search);
	if (pos_search == std::string::npos)
		return ("");
	while (1)
	{
		if (pos_search == std::string::npos)
			break;
		str.erase(pos_search, search.length());
		str.insert(pos_search, replace);
		pos_search = str.find(search, pos_search + replace.length());
	}
	return (str);
}

bool checkFileEmpty(std::ifstream &inFile)
{
	if (inFile.peek() == EOF)
		return (true);
	return (false);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "bad arguments" << std::endl;
		return (1);
	}
	std::string fileContent;
	std::stringstream buffer;
	std::string fileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty() || s2.empty())
		return (1);
	std::ifstream inFile;

	inFile.open(fileName);
	if (!inFile.is_open())
	{
		std::cout << "Read Error" << std::endl;
		return (1);
	}
	if (checkFileEmpty(inFile))
	{
		std::cout << "the file is empty." << std::endl;
		inFile.close();
		return (1);
	}
	buffer << inFile.rdbuf();
	fileContent = buffer.str();
	fileContent = my_replace(fileContent, s1, s2);
	if (fileContent.empty())
	{
		std::cout << "s1 no match any charachters" << std::endl;
		return (1);
	}
	std::ofstream outFile;
	outFile.open(fileName + ".replace");
	if (!outFile.is_open())
	{
		std::cout << "Read Error" << std::endl;
		return (1);
	}
	outFile << fileContent;
	inFile.close();
	outFile.close();
}