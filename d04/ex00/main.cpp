/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:38:16 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 22:21:26 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "-------------- Wrong variation --------------" << std::endl;
	std::cout << std::endl;

	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* iWrong = new WrongCat();

	std::cout << metaWrong->getType() << " " << std::endl;
	std::cout << iWrong->getType() << " " << std::endl;

	iWrong->makeSound(); // no output
	metaWrong->makeSound(); // no output

	return 0;
}
