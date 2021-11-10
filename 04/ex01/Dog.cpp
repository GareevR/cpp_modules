/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:53:53 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 15:23:28 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) {

	std::cout << "Default Dog constructor called" << std::endl;

	this->type = "Dog";
	this->_brain = new Brain();

	return ;
}

Dog::Dog(Dog const & src) {

	std::cout << "Copy Dog constructor called" << std::endl;

	this->type = src.type;
	this->_brain = new Brain(*src._brain);

	return ;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;

	delete this->_brain;

	return ;
}

Dog &	Dog::operator=(Dog const & rhs) {

	if (this != &rhs) {
		delete this->_brain;
		this->type = rhs.type;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void		Dog::makeSound(void) const {
	std::cout << "I'm a dog, motherf***ers. WOOF WOOF!" << std::endl;
}
