/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:33:48 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 15:39:57 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) {

	// std::cout << "Default Ice constructor called" << std::endl;

	this->type = "ice";

	return ;
}

Ice::Ice(Ice const & src) {

	// std::cout << "Copy Ice constructor called" << std::endl;

	*this = src;

	return ;
}

Ice::~Ice() {

	// std::cout << "Ice destructor called" << std::endl;

	return ;
}

Ice &	Ice::operator=(Ice const & rhs) {

	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

std::string const &	Ice::getType(void) const {

	return this->type;
}

AMateria*	Ice::clone(void) const {

	AMateria*	cloneIce = new Ice(*this);

	return cloneIce;
}

void	Ice::use(ICharacter & target) {
	std::cout <<
		"* shoots an ice bolt at " <<
		target.getName() << " *" <<
	std::endl;
}
