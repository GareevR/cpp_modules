/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:06:46 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 18:10:18 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.hpp"

int	main(int ac, char *av[]) {

	std::string		myStrings[4];
	std::ifstream	file;
	std::string		testString;

	if (ac != 4)
		errorHandler("Invalid arguments count", 1);
	setStringArray(myStrings, av);
	exchangeStrings(myStrings);
	writeNewFile(myStrings);
}
