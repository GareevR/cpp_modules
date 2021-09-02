/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:43:35 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 20:11:21 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void) : _name("Mr.Default") {

	std::cout << "Default Character constructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		this->_inventoryIndex[i] = 0;
	}
	this->_index = 0;

	return ;
}

Character::Character(std::string const & name) : _name(name) {

	std::cout << "Parametric Character constructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		this->_inventoryIndex[i] = 0;
	}
	this->_index = 0;

	return ;
}

Character::Character(Character const & src) {

	std::cout << "Copy Character constructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		this->_inventoryIndex[i] = 0;
	}
	this->_index = 0;
	*this = src;

	return ;
}

Character::~Character() {

	std::cout << "Character destructor called" << std::endl;

	for (int i = 0; i < 4; i++) {
		if (this->_inventoryIndex[i] == 1) {
			delete this->_inventory[i];
		}
	}

	return ;
}

Character &	Character::operator=(Character const & rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++) {
			this->_inventoryIndex[i] = rhs._inventoryIndex[i];
			if (rhs._inventoryIndex[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
			this->_index = rhs._index;
		}
	}
	return *this;
}

std::string const &	Character::getName(void) const {

	return this->_name;
}

void	Character::use(int ind, ICharacter & target) {

	std::cout << "<" << this->_name << ">: ";
	this->_inventory[ind]->use(target);
}

void	Character::equip(AMateria *m) {

	if (this->_index < 4) {
		_inventoryIndex[this->_index] = 1;
		_inventory[this->_index] = m->clone();
		this->_index++;
	}
}

void	Character::unequip(int idx) {
	if (this->_inventoryIndex[idx]) {
		_inventoryIndex[idx] = 0;
		this->_index = idx;
		delete _inventory[this->_index];
	}
}
