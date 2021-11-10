/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:52:52 by macservis         #+#    #+#             */
/*   Updated: 2021/09/06 17:27:03 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <list>
#include <vector>

int		main() {

	std::list<int>		lst1;
	std::vector<int>	vector1(5, 10);

	lst1.push_back(1);
	lst1.push_back(2);
	lst1.push_back(3);

	vector1.push_back(10);

	std::cout << "<- Looking for value 10 in lst1 ->" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	try {
		easyfind(lst1, 10);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "<- Looking for value 10 in vector1 ->" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	try {
		easyfind(vector1, 10);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
