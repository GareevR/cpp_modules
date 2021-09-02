/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:50:14 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 20:51:14 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Empty") {

	std::cout << "Default WrongAnimal constructor called" << std::endl;

	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {

	std::cout << "Copy WrongAnimal constructor called" << std::endl;

	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal destructor called" << std::endl;

	return ;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs) {

	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

void		WrongAnimal::makeSound(void) const {

}

std::string	WrongAnimal::getType(void) const {
	return this->type;
}
