/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:13:19 by ambouren          #+#    #+#             */
/*   Updated: 2022/11/23 17:13:20 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>
#include <iostream>

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

Animal::Animal()
{
    std::cout << GREEN << "Constructor Animal" << NEUTRAL << std::endl;
}

Animal::~Animal()
{
    std::cout << RED << "Destructor Animal" << NEUTRAL << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << GREEN << "Copy Constructor Animal" << NEUTRAL << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	if (&other == this)
	{
		return *this;
	}
	_type = other._type;
    return *this;
}

const std::string& Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "brh !" << std::endl;
}
