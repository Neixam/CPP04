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

Cat::Cat() : Animal()
{
    std::cout << GREEN << "Constructor Cat" << NEUTRAL << std::endl;
	setType("Cat");
}

Cat::~Cat()
{
    std::cout << RED << "Destructor Cat" << NEUTRAL << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
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
	setType(other.getType());
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "mew !" << std::endl;
}
