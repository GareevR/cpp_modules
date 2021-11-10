/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:38:16 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 15:44:28 by macservis        ###   ########.fr       */
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
	const Animal* animalArray[4];
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;

	for (int i = 0; i < 2; i++) {
		animalArray[i] = new Dog();
	}
	std::cout << "----------------------" << std::endl;
	for (int i = 2; i < 4; i++) {
		animalArray[i] = new Cat();
	}
	std::cout << "----------------------" << std::endl;
	for(int i = 0; i < 2; i++) {
		delete animalArray[i];
	}
	std::cout << "----------------------" << std::endl;
	for(int i = 2; i < 4; i++) {
		delete animalArray[i];
	}

	return 0;
}
