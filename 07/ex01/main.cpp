/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:13:14 by macservis         #+#    #+#             */
/*   Updated: 2021/09/10 14:36:59 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	printIncrementedValue(int const & x) {

	std::cout << x + 1 << std::endl;;
}

void	printName(std::string const & str) {

	std::cout << "The name is " << str << std::endl;
}

void	doubleTheDouble(double const & val) {

	std::cout << val * 2 << std::endl;;
}

template <typename T>
void	print(T const & val) {
	std::cout << val << std::endl;
}

int		main() {

	int		arrayOfInts[] = {
		1, 2, 3, 4, 5
	};

	std::string		arrayOfStrings[] = {
		"James", "Peter", "John"
	};

	double	arrayOfDoubles[] = {
		1.5, 2.5, 3.5, 4.5, 5.5
	};

	std::cout << "------------- Int array -------------" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "Index: " << i << " - Value: " << arrayOfInts[i] << std::endl;
	}
	std::cout << "<- Iter function called ->" << std::endl;
	// iter(arrayOfInts, 5, &printIncrementedValue);
	iter(arrayOfInts, 5, printIncrementedValue);

	std::cout << "------------- String array -------------" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "Index: " << i << " - String: " << arrayOfStrings[i] << std::endl;
	}
	std::cout << "<- Iter function called ->" << std::endl;
	// iter(arrayOfStrings, 3, &printName);
	iter(arrayOfStrings, 3, printName);

	std::cout << "------------- Double array -------------" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << "Index: " << i << " - Value: " << arrayOfDoubles[i] << std::endl;
	}
	std::cout << "<- Iter function called ->" << std::endl;
	// iter(arrayOfDoubles, 3, &doubleTheDouble);
	iter(arrayOfDoubles, 3, doubleTheDouble);

	return 0;
}
