#pragma once
#ifndef CPP04_ICE_HPP
#define CPP04_ICE_HPP


#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(const Ice &oth);
	Ice &operator=(const Ice &oth);
	void use(ICharacter &target);
	AMateria* clone() const;
};


#endif
