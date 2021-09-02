/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 23:56:08 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 14:28:29 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	std::cout << "Parametric constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) : _name(src._name), _hitPoints(src._hitPoints),
	_energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;
	return ;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap destructor called" << std::endl;

	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs) {

	if (this != &rhs) {
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void	ClapTrap::attack(std::string const & target) {

	std::cout <<
		"ClapTrap " << this->_name << " attacks " << target <<
		", causing " << this->_attackDamage << " points of damage!" <<
	std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	this->_hitPoints += amount;
	std::cout <<
		"ClapTrap " << this->_name << " being repaired from " << amount <<
		" points of damage! Current health: " << this->_hitPoints <<
	std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	this->_hitPoints -= amount;
	std::cout <<
		"ClapTrap " << this->_name << " takes " << amount <<
		" points of damage! Current health: " << this->_hitPoints <<
	std::endl;
}
