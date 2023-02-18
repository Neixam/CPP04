/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambouren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:13:44 by ambouren          #+#    #+#             */
/*   Updated: 2022/11/23 17:13:45 by ambouren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		i->makeSound();
		j->makeSound();

		delete j;//should not create a leak
		delete i;
	}
	{
		const int size = 24;
		const Animal* animals[size];

		for (int tmp = 0; tmp < size; tmp++)
		{
			if (tmp % 2)
				animals[tmp] = new Dog();
			else
				animals[tmp] = new Cat();
		}
		for (int tmp = 0; tmp < size; tmp++)
		{
			animals[tmp]->makeSound();
			delete animals[tmp];
		}
	}
	{
		const Dog *dog = new Dog();
		const Cat *cat = new Cat();
		const Animal* j = new Dog(*dog);
		const Animal* i = new Cat(*cat);

		delete j;//should not create a leak
		delete i;
		delete dog;
		delete cat;
	}
    return 0;
}
