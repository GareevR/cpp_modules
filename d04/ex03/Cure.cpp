/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:52:42 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 17:54:24 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) {

	std::cout << "Default Cure constructor called" << std::endl;

	this->type = "cure";

	return ;
}

Cure::Cure(Cure const & src) {

	std::cout << "Copy Cure constructor called" << std::endl;

	*this = src;

	return ;
}

Cure::~Cure() {

	std::cout << "Cure destructor called" << std::endl;

	return ;
}

Cure &	Cure::operator=(Cure const & rhs) {

	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

std::string const &	Cure::getType(void) const {
	return this->type;
}

AMateria*	Cure::clone(void) const {

	AMateria*	cloneIce = new Cure(*this);

	return cloneIce;
}

void	Cure::use(ICharacter & target) {
	std::cout <<
		"* heals " <<
		target.getName() << "'s wounds *" <<
	std::endl;
}
