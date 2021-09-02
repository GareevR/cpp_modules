/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 13:21:39 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 16:07:37 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(void) {

	std::cout << "Default ScavTrap constructor called" << std::endl;

	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "Parametric ScavTrap constructor called" << std::endl;

	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) {

	std::cout << "Copy ScavTrap constructor called" << std::endl;

	*this = src;
	return ;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap " << this->_name << " - destructor called" << std::endl;

	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs) {

	if (this != &rhs) {
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void		ScavTrap::guardGate(void) {

	std::cout <<
		"ScavTrap " << this->_name << " has entered Gate keeper mode!" <<
	std::endl;
}

