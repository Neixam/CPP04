#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(const Cure &oth) : AMateria(oth._type)
{}

Cure &Cure::operator=(const Cure &oth)
{
    (void)oth;
    return *this;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure();
}
