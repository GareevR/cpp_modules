/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:50:14 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 17:12:29 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Empty") {

	std::cout << "Default Animal constructor called" << std::endl;

	return ;
}

Animal::Animal(Animal const & src) {

	std::cout << "Copy Animal constructor called" << std::endl;

	*this = src;
	return ;
}

Animal::~Animal() {

	std::cout << "Animal destructor called" << std::endl;

	return ;
}

Animal &	Animal::operator=(Animal const & rhs) {

	std::cout << "Animal assignation operator called" << std::endl;

	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

void		Animal::makeSound(void) const {

}

std::string	Animal::getType(void) const {
	return this->type;
}
