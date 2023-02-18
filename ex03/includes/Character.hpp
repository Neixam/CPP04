#pragma once
#ifndef CHARACTERE_HPP
#define CHARACTERE_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character();
	~Character();
	Character(const Character &oth);
	Character &operator=(const Character &oth);
	Character(const std::string &name);
	void equip(AMateria *a);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	const std::string &getName() const;
private:
	std::string	_name;
	AMateria	*_inventory[4];
};


#endif
