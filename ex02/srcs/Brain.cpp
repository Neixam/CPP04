#include <iostream>
#include "Brain.hpp"

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

Brain::Brain()
{
	std::cout << GREEN << "Constructor Brain" << NEUTRAL << std::endl;

}

Brain::~Brain()
{
	std::cout << RED << "Destructor Brain" << NEUTRAL << std::endl;

}

Brain::Brain(const Brain &oth)
{
	std::cout << GREEN << "Copy Constructor Brain" << NEUTRAL << std::endl;
	*this = oth;
}

Brain &Brain::operator=(const Brain &oth)
{
	if (this == &oth)
	{
		return *this;
	}
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = oth.ideas[i];
	}
	return *this;
}
