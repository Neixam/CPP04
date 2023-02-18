/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:13:32 by ambouren          #+#    #+#             */
/*   Updated: 2022/11/23 17:13:33 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

WrongAnimal::WrongAnimal()
{
	std::cout << GREEN << "Constructor WrongAnimal" << NEUTRAL << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "Destructor WrongAnimal" << NEUTRAL << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << GREEN << "Copy Constructor WrongAnimal" << NEUTRAL << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return *this;
	_type = other._type;
	return *this;
}

const std::string& WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "brh !" << std::endl;
}

void WrongAnimal::setType(const std::string &type)
{
	_type = type;
}