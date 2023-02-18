/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:13:36 by ambouren          #+#    #+#             */
/*   Updated: 2022/11/23 17:13:37 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <string>
#include <iostream>

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << GREEN << "Constructor WrongCat" << NEUTRAL << std::endl;
	setType("Cat");
}

WrongCat::~WrongCat()
{
	std::cout << RED << "Destructor WrongCat" << NEUTRAL << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << GREEN << "Copy Constructor WrongCat" << NEUTRAL << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return *this;
	setType(other.getType());
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "mew !" << std::endl;
}
