/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:21:58 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 16:04:23 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	// ClapTrap	rusty("Rusty James");
	// ScavTrap	sparky("ScavTrap Sparky");
	FragTrap	jessy("FragTrap Jessy");

	// rusty.attack("Siege");
	// rusty.takeDamage(5);
	// rusty.beRepaired(20);

	// sparky.guardGate();
	// sparky.attack("Castle");

	jessy.highFivesGuys();
	jessy.takeDamage(20);
}
