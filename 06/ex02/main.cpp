/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 23:31:06 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 23:18:48 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Classes.hpp"
#include <iostream>

Base*	generate(void) {

	Base*	randomInstance;
	int		randomValue;

	std::srand(std::time(nullptr)); // use current time as seed for random generator
	randomValue = std::rand() % 3;

	if (randomValue == 0) {
		std::cout << "Class A generated" << std::endl;
		randomInstance = new A;
	}
	else if (randomValue == 1) {
		std::cout << "Class B generated" << std::endl;
		randomInstance = new B;
	}
	else {
		std::cout << "Class C generated" << std::endl;
		randomInstance = new C;
	}
	return randomInstance;
}

void	identify(Base* p) {

	A*		a = dynamic_cast<A*>(p);
	B*		b = dynamic_cast<B*>(p);
	C*		c = dynamic_cast<C*>(p);

	std::cout << "identify(Base* p) function called" << std::endl;

	if (a) {
		std::cout << "A" << std::endl;
	} else if (b) {
		std::cout << "B" << std::endl;
	} else if (c) {
		std::cout << "C" << std::endl;
	}
}

void	identify(Base& p) {

	std::cout << "identify(Base& p) function called" << std::endl;

	try {
		A&		a = dynamic_cast<A&>(p);
		static_cast<void>(a);
		std::cout << "A" << std::endl;
	} catch (std::exception & e) {
		;
	}
	try {
		B&		b = dynamic_cast<B&>(p);
		static_cast<void>(b);
		std::cout << "B" << std::endl;
	} catch (std::exception & e) {
		;
	}
	try {
		C&		c = dynamic_cast<C&>(p);
		static_cast<void>(c);
		std::cout << "C" << std::endl;
	} catch (std::exception & e) {
		;
	}
}

int main (void) {

	Base*	randomInstance;

	randomInstance = generate();
	std::cout << "-------------------" << std::endl;
	identify(randomInstance);
	std::cout << "-------------------" << std::endl;
	identify(*randomInstance);

	delete randomInstance;
	return 0;
}
