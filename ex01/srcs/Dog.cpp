/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:13:28 by ambouren          #+#    #+#             */
/*   Updated: 2022/11/23 17:13:29 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <string>
#include <iostream>

const static std::string RED = "\033[31m";
const static std::string GREEN = "\033[32m";
const static std::string NEUTRAL = "\033[0m";

Dog::Dog() : Animal(), _brain(new Brain())
{
    std::cout << GREEN << "Constructor Dog" << NEUTRAL << std::endl;
	setType("Dog");
}

Dog::~Dog()
{
    std::cout << RED << "Destructor Dog" << NEUTRAL << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &other) : Animal(other), _brain(new Brain())
{
    std::cout << GREEN << "Copy Constructor Dog" << NEUTRAL << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if (&other == this)
	{
		return *this;
	}
	setType(other.getType());
	*_brain = *other._brain;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "woof !" << std::endl;
}
