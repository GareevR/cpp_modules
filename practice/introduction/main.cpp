/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:08:10 by macservis         #+#    #+#             */
/*   Updated: 2021/07/20 17:57:36 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iomanip>
#include <iostream>
#include "Sample.class.hpp"
#include "Sample2.class.hpp"
#include "Sample3.class.hpp"
#include "Sample4.class.hpp"
#include "Sample5.class.hpp"
#include "Sample6.class.hpp"
#include "Sample7.class.hpp"

// int		gl_var = 1;
// int		f(void) {
// 	return 2;
// }

// namespace	Foo {
// 	int		gl_var = 3;
// 	int		f(void) {
// 		return 4;
// 	}
// }

// namespace Muf = Foo;

// void	f0(void)
// {
// 	Sample7	instance;

// 	std::cout << "Number of instances: " << Sample7::getNbInst() << std::endl;

// 	return ;
// }

// void	f1(void)
// {
// 	Sample7	instance;

// 	std::cout << "Number of instances: " << Sample7::getNbInst() << std::endl;
// 	f0();

// 	return ;
// }

int		main(void)
{
	// Sample	instance('a', 42, 4.2f);
	// Sample2	instance2('z', 13, 3.14f);
	// Sample3 instance3(3.14f);
	// Sample4 instance4;
	// Sample5 instance5;
	// Sample6		instance6_1(42);
	// Sample6		instance6_2(42);
	std::string		str;

	// std::cout << "Enter: " << std::endl;
	while (str.length() == 0)
		std::getline(std::cin, str);

	// std::cin >> str;
	// str.erase(5);
	std::cout << str.length() << std::endl;
	std::cout << "You entered: " << str << std::endl;
	// std::cout << "Number of instances: " << Sample7::getNbInst() << std::endl;
	// f1();
	// std::cout << "Number of instances: " << Sample7::getNbInst() << std::endl;

	// if (&instance6_1 == &instance6_1)
	// 	std::cout << "instance1 and instance1 are physically equal" << std::endl;
	// else
	// 	std::cout << "instance1 and instance1 are physically not equal" << std::endl;

	// if (&instance6_1 == &instance6_2)
	// 	std::cout << "instance1 and instance2 are physically equal" << std::endl;
	// else
	// 	std::cout << "instance1 and instance2 are not physically equal" << std::endl;

	// if (instance6_1.compare(&instance6_1) == 0)
	// 	std::cout << "instance1 and instance1 are structurally equal" << std::endl;
	// else
	// 	std::cout << "instance1 and instance1 are not structurally equal" << std::endl;

	// if (instance6_1.compare(&instance6_2) == 0)
	// 	std::cout << "instance1 and instance2 are structurally equal" << std::endl;
	// else
	// 	std::cout << "instance1 and instance2 are not structurally equal" << std::endl;

	// instance4.publicFoo = 42;
	// std::cout << "instance4.publicFoo: " << instance4.publicFoo << std::endl;
	// instance4.publicBar();

	// std::cout << "instance5.getFoo(): " << instance5.getFoo() << std::endl;
	// instance5.setFoo(42);
	// std::cout << "instance5.getFoo(): " << instance5.getFoo() << std::endl;
	// instance5.setFoo(-42);
	// std::cout << "instance5.getFoo(): " << instance5.getFoo() << std::endl;


	// instance3.bar();

	// instance.foo = 42;
	// std::cout << "instance.foo: " << instance.foo << std::endl;
	// instance.bar();

	return 0;
}


