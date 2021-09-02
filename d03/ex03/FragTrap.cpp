/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:21:49 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 16:35:56 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(void) {

	std::cout << "Default FragTrap constructor called" << std::endl;

	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	return ;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "Parametric FragTrap constructor called" << std::endl;

	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	return ;
}

FragTrap::FragTrap(FragTrap const & src) {

	std::cout << "Copy FragTrap constructor called" << std::endl;

	*this = src;
	return ;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap " << this->_name << " - destructor called" << std::endl;

	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs) {

	if (this != &rhs) {
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void		FragTrap::highFivesGuys(void) {

	std::cout <<
		"ClapTrap " << this->_name << " says: " <<
		"\"Time for high-fives, guys!\"" <<
	std::endl;
}

void		FragTrap::attack(std::string const & target) {

	std::cout <<
		"ClapTrap " << this->_name << " FragTrap-attacks " << target <<
		", causing " << this->_attackDamage << " points of damage!" <<
	std::endl;
}
