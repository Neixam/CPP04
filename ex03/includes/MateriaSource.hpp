#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &oth);
	MateriaSource &operator=(const MateriaSource &oth);
	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
private:
	AMateria *_source[4];
};

#endif
