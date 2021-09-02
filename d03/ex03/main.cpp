/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:21:58 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 16:32:07 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {

	// ClapTrap	rusty("Rusty James");
	// ScavTrap	sparky("Sparky");
	// FragTrap	jessy("Jessy");
	DiamondTrap		john("Jonathan");

	// rusty.attack("Siege");
	// rusty.takeDamage(5);
	// rusty.beRepaired(20);

	// sparky.guardGate();
	// sparky.attack("Castle");

	// jessy.highFivesGuys();
	// jessy.takeDamage(20);
	std::cout << std::endl;
	john.attack("James");
	std::cout << std::endl;
	john.whoAmI();
	std::cout << std::endl;
	john.highFivesGuys();
	std::cout << std::endl;
	john.takeDamage(10);
	std::cout << std::endl;
}