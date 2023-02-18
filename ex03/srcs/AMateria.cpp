#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria &oth) : _type(oth._type)
{

}

AMateria &AMateria::operator=(const AMateria &oth)
{
	if (this == &oth)
	{
		return *this;
	}
	_type = oth._type;
	return *this;
}

AMateria::AMateria(const std::string &type) : _type(type)
{}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* no materia type using by " << target.getName() << " *" << std::endl;
}
