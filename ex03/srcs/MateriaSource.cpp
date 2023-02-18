#include "MateriaSource.hpp"

MateriaSource &MateriaSource::operator=(const MateriaSource &oth)
{
	if (this == &oth)
	{
		return *this;
	}
	for (int i = 0; i < 4; i++)
	{
		if (oth._source[i])
			_source[i] = oth._source[i]->clone();
	}
	return *this;
}

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
			delete _source[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &oth)
{
	*this = oth;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_source[i])
		{
			_source[i] = materia;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] && _source[i]->getType() == type)
			return _source[i];
	}
	return NULL;
}
