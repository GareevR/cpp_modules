/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:13:31 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 19:34:15 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;
	return ;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed&		Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int			Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_value;
}

void		Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;

	this->_value = raw;
}
