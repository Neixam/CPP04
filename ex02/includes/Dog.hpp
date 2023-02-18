/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:14:03 by ambouren          #+#    #+#             */
/*   Updated: 2022/11/23 17:14:04 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    void makeSound() const;
private:
	Brain	*_brain;
};


#endif