/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:11:24 by macservis         #+#    #+#             */
/*   Updated: 2021/09/02 00:16:32 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <cmath>
#include <iomanip>
#include <string>

Converter::Converter(void) : _masterDouble(0), _precision(1) {

	// std::cout << "Default Converter constructor called" << std::endl;

	return ;
}

Converter::Converter(char masterChar) : _precision(1) {

	// std::cout << "Parametric Converter constructor called" << std::endl;

	_masterDouble = static_cast<double>(masterChar);
 	return ;
}

Converter::Converter(double masterDouble, int precision) : _masterDouble(masterDouble), _precision(precision) {

	// std::cout << "Parametric Converter constructor called" << std::endl;

	if (precision > 9)
		_precision = 9;
	else if (precision < 1)
		_precision = 1;
 	return ;
}

Converter::Converter(Converter const & src) {

	// std::cout << "Copy Converter constructor called" << std::endl;

	*this = src;
	return ;
}

Converter::~Converter() {

	// std::cout << "Converter destructor called" << std::endl;

	return ;
}

Converter &	Converter::operator=(Converter const & rhs) {

	if (this != &rhs) {
		this->_masterDouble = rhs._masterDouble;
		this->_precision = rhs._precision;
	}
	return *this;
}

void	Converter::convertToChar(void) const {

	try {
		_checkConversion();
		_checkDisplay();
		char character = static_cast<char>(this->_masterDouble);
		std::cout << "char: '" << character << "'" << std::endl;
	} catch (std::exception & e) {
		std::cout << "char: " << e.what() << std::endl;
	}

}

void	Converter::convertToFloat(void) const {

	float floatValue = static_cast<float>(this->_masterDouble);

	std::cout << "float: ";
	if (std::isinf(floatValue) && floatValue > 0)
		std::cout << "+";

	std::cout << std::setprecision(_precision) << std::fixed;
	std::cout << floatValue << "f" << std::endl;
}

void	Converter::convertToDouble(void) const {

	std::cout << "double: ";
	if (std::isinf(this->_masterDouble) && this->_masterDouble > 0)
		std::cout << "+";
	std::cout << this->_masterDouble << std::endl;
}

void	Converter::convertToInt(void) const {

	try {
		_checkConversion();
		int integer = static_cast<int>(this->_masterDouble);
		std::cout << "int: " << integer << std::endl;
	} catch (std::exception & e) {
		std::cout << "int: " << e.what() << std::endl;
	}
}

void	Converter::_checkConversion(void) const {

	if (std::isnan(this->_masterDouble) || std::isinf(this->_masterDouble))
		throw ConversionImpossible();
}

void	Converter::_checkDisplay(void) const {

	int		x = static_cast<int>(this->_masterDouble);

	if (!std::isprint(x))
		throw NonDisplayable();
}
