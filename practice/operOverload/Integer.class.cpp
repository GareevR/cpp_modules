/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:27:00 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 18:12:20 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Integer.class.hpp"

Integer::Integer(int const n) : _n(n)
{
	std::cout << "Constructor called with value: " << this->_n << std::endl;
	return ;
}

Integer::~Integer()
{
	std::cout << "Destructor called with value: " << this->_n  << std::endl;
	return ;
}

int		Integer::getValue(void) const {
	return this->_n;
}

Integer&	Integer::operator=(Integer const & rhs) {
	std::cout << "Assignation operator called";
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return *this;
}

Integer		Integer::operator+(Integer const & rhs) const {

	std::cout << "Addition operator called: ";
	std::cout << this->_n << " + " << rhs.getValue() << std::endl;

	return Integer(this->_n + rhs.getValue());
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs) {
	o << rhs.getValue();
	return o;
}
