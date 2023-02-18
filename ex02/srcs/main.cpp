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
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		// const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		i->makeSound();
		j->makeSound();

		delete j;//should not create a leak
		delete i;
	}
	return 0;
}