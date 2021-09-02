/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:38:16 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 17:26:19 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	// const Animal* i = new Cat();
	// const Animal* j = new Dog();
	// delete j;
	const Animal* animalArray[8];
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;

	for (int i = 0; i < 4; i++) {
		animalArray[i] = new Dog();
	}
	for (int i = 4; i < 8; i++) {
		animalArray[i] = new Cat();
	}
	for(int i = 0; i < 8; i++) {
		delete animalArray[i];
	}

	return 0;
}
