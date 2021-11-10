/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:21:52 by macservis         #+#    #+#             */
/*   Updated: 2021/09/06 19:38:06 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <list>

int		main() {

	srand((unsigned)time(NULL)); // random seed

	std::list<int>	lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(-10);
	lst.push_back(30);

	Span sp = Span(4);
	std::cout << "<- Spans for list of 4 elems ->" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	sp.addNumber(lst.begin(), lst.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "<- Spans for 20000 elems ->" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	Span spBig = Span(20000);
	for (int x = 0; x < 20000; x ++) {
		spBig.addNumber(x);
	}
	std::cout << spBig.shortestSpan() << std::endl;
	std::cout << spBig.longestSpan() << std::endl;
	std::cout << std::endl;

	std::cout << "<- Excess element adding ->" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	try {
		sp.addNumber(1500);
	} catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "<- No span to find ->" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	Span	noSpan(2);
	try {
		std::cout << noSpan.shortestSpan() << std::endl;
	} catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
