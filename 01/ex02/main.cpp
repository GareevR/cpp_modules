/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:47:14 by macservis         #+#    #+#             */
/*   Updated: 2021/09/07 16:04:27 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string		myString = "HI THIS IS BRAIN";
	std::string*	stringPTR = &myString;
	std::string&	stringREF = myString;

	std::cout << "myString address: " << &myString << std::endl;
	std::cout << "myString address using stringPTR: " << stringPTR << std::endl;
	std::cout << "myString address using stringREF: " << &stringREF << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "myString using stringPTR: " << *stringPTR << std::endl;
	std::cout << "myString using stringREF: " << stringREF << std::endl;
	return 0;
}
