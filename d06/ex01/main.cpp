/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:55:46 by macservis         #+#    #+#             */
/*   Updated: 2021/09/01 23:20:15 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>
#include <cstdio>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr) {

	uintptr_t	address;

	std::cout << "serialize function called" << std::endl;

	address = reinterpret_cast<uintptr_t>(ptr);

	return address;
}

Data*		deserialize(uintptr_t raw) {

	Data*	dataPtr;

	std::cout << "deserialize function called" << std::endl;

	dataPtr = reinterpret_cast<Data*>(raw);
	return dataPtr;
}

int		main(void) {

	uintptr_t		x;
	Data	randomData;
	Data	*randomDataPtr;

	randomData.n = 100;
	randomData.str = "some string";

	std::cout <<
		"randomData.str = " << randomData.str << std::endl <<
		"randomData.n = " << randomData.n <<
	std::endl;


	std::cout << "--------------------------" << std::endl;
	x = serialize(&randomData);
	std::cout << std::endl;
	randomDataPtr = deserialize(x);
	std::cout << "--------------------------" << std::endl;

	std::cout <<
		"randomDataPtr->str = " << randomDataPtr->str << std::endl <<
		"randomDataPtr->n = " << randomDataPtr->n <<
	std::endl;
	std::cout << "--------------------------" << std::endl;
	printf("randomData address	-> %p\n", &randomData);
	printf("randomDataPtr		-> %p\n", randomDataPtr);

}
