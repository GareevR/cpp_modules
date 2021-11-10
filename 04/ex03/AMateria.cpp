/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:10:28 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 15:39:25 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void) {

	// std::cout << "Default AMateria constructor called" << std::endl;

	this->type = "default materia";

	return ;
}

AMateria::AMateria(AMateria const & src) {

	// std::cout << "Copy AMateria constructor called" << std::endl;

	*this = src;

	return ;
}

AMateria::~AMateria() {

	// std::cout << "AMateria destructor called" << std::endl;

	return ;
}

AMateria &	AMateria::operator=(AMateria const & rhs) {

	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

std::string const &	AMateria::getType(void) const {
	return this->type;
}

void	AMateria::use(ICharacter & target) {
	(void)target;
}
