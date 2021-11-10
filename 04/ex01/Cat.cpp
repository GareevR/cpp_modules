/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:33:48 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 15:48:27 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) {

	std::cout << "Default Cat constructor called" << std::endl;

	this->type = "Cat";
	this->_brain = new Brain();

	return ;
}

Cat::Cat(Cat const & src) {

	std::cout << "Copy Cat constructor called" << std::endl;

	this->type = src.type;
	this->_brain = new Brain(*src._brain);

	return ;
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;

	delete this->_brain;

	return ;
}

Cat &	Cat::operator=(Cat const & rhs) {

	if (this != &rhs) {
		delete this->_brain;
		this->type = rhs.type;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void		Cat::makeSound(void) const {
	std::cout << "I'm a cat, b*tch. MEOW MEOW!" << std::endl;
}
