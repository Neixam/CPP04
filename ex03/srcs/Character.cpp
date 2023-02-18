#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("randy")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{

}

Character::Character(const Character &oth)
{
	*this = oth;
}

Character &Character::operator=(const Character &oth)
{
	if (this == &oth)
	{
		return *this;
	}
	return *this;
}

void Character::equip(AMateria *a)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = a;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return;
	_inventory[idx] = NULL;
}

const std::string &Character::getName() const
{
	return _name;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return;
	_inventory[idx]->use(target);
}

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
