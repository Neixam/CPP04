#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria &oth);
	AMateria &operator=(const AMateria &oth);
	AMateria(std::string const & type);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
