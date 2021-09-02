/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:13:31 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 20:33:52 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

Fixed::Fixed(int const i) {

	std::cout << "Int constructor called" << std::endl;

	this->_value = i * (1 << _fractionalBits);
}

Fixed::Fixed(float const f) {

	std::cout << "Float constructor called" << std::endl;

	this->_value = (int)(roundf(f * (1 << _fractionalBits)));
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

float		Fixed::toFloat(void) const {

	return ((float)this->_value / (float)(1 << _fractionalBits));
}

int		Fixed::toInt(void) const {

	return (this->_value / (1 << _fractionalBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
