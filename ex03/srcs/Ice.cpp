#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(const Ice &oth) : AMateria(oth._type)
{}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice &Ice::operator=(const Ice &oth)
{
	if (this == &oth)
	{
		return *this;
	}
	_type = oth._type;
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice();
}
