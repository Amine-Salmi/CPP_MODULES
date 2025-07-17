#pragma once

#include <iostream>
#include <string>

class Brain {
protected: 
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &copy);
	Brain(const std::string &ideas);
	~Brain();

	Brain &operator=(const Brain &src);
	void setIdea(int index, const std::string idea);
	std::string getIdea(int index);
};