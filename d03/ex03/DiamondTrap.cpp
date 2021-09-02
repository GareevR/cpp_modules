/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:12:15 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 16:29:54 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(void) {

	std::cout << "Default DiamondTrap constructor called" << std::endl;

	this->_d_name = "Default";
	ClapTrap::_name = _d_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	return ;
}

DiamondTrap::DiamondTrap(std::string name) {

	std::cout << "Parametric DiamondTrap constructor called" << std::endl;

	this->_d_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {

	std::cout << "Copy DiamondTrap constructor called" << std::endl;

	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap " << this->_name << " - destructor called" << std::endl;

	return ;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs) {

	if (this != &rhs) {
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void			DiamondTrap::attack(std::string const & target) {
	return (ScavTrap::attack(target));
}

void			DiamondTrap::whoAmI(void) {
	std::cout <<
		"My name is " << this->_d_name <<
		". My ClapTrap name is " << this->_name <<
	std::endl;
}
