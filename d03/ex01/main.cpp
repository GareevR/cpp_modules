/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:21:58 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 16:13:51 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	// ClapTrap	rusty("James");

	// rusty.attack("Anus");
	// rusty.takeDamage(5);
	// rusty.beRepaired(20);

	ScavTrap	sparky("Sparky");
	sparky.guardGate();
	sparky.attack("Castle");
}
