/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:13:23 by ambouren          #+#    #+#             */
/*   Updated: 2022/11/23 17:13:24 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <string>
#include <iostream>

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

Cat::Cat() : Animal(), _brain(new Brain())
{
    std::cout << GREEN << "Constructor Cat" << NEUTRAL << std::endl;
    _type = "Cat";
}

Cat::~Cat()
{
    std::cout << RED << "Destructor Cat" << NEUTRAL << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other) : Animal(other), _brain(new Brain())
{
    std::cout << GREEN << "Copy Constructor Cat" << NEUTRAL << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if (&other == this)
	{
		return *this;
	}
	_type = other._type;
	*_brain = *other._brain;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "mew !" << std::endl;
}
