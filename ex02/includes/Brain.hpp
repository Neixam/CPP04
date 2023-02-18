#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
public:
	Brain();
	~Brain();
	Brain(const Brain &oth);
	Brain& operator=(const Brain &oth);
	std::string ideas[100];
};

#endif
