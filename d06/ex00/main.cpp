/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:34:58 by macservis         #+#    #+#             */
/*   Updated: 2021/09/02 00:25:11 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

#include "Converter.hpp"
#include "utils.hpp"

int		main(int argc, char* argv[]) {

	double		masterValue;
	Converter	convert;

	if (argc == 2) {
		parser(argv[1]);
		masterValue = atof(argv[1]);
		std::cout << "string: " << argv[1] << std::endl;
		if (isChar(argv[1]))
			convert = Converter(argv[1][0]);
		else
			convert = Converter(masterValue, getPrecision(argv[1]));
		convert.convertToChar();
		convert.convertToInt();
		convert.convertToFloat();
		convert.convertToDouble();
	} else {
		std::cout << "invalid arguments count" << std::endl;
	}
}
