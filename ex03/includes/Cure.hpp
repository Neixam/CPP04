#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(const Cure &oth);
	Cure &operator=(const Cure &oth);
	void use(ICharacter &target);
	AMateria* clone() const;
};


#endif
