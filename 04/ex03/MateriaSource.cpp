/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:43:35 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 19:09:07 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) {

	// std::cout << "Default MateriaSource constructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		this->_inventoryIndex[i] = 0;
	}
	this->_index = 0;

	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src) {

	// std::cout << "Copy MateriaSource constructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		this->_inventoryIndex[i] = 0;
	}
	this->_index = 0;
	*this = src;

	return ;
}

MateriaSource::~MateriaSource() {

	// std::cout << "MateriaSource destructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		if (this->_inventoryIndex[i] == 1) {
			delete this->_inventory[i];
		}
	}

	return ;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs) {

	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			this->_inventoryIndex[i] = rhs._inventoryIndex[i];
			if (rhs._inventoryIndex[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
			this->_index = rhs._index;
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m) {

	if (this->_index < 4) {
		_inventoryIndex[this->_index] = 1;
		_inventory[this->_index] = m->clone();
		this->_index++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]->getType() == type) {
			AMateria*	myMateria = this->_inventory[i]->clone();
			return myMateria;
		}
	}
	return 0;
}
