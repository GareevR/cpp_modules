/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:21:58 by macservis         #+#    #+#             */
/*   Updated: 2021/09/08 18:14:48 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {

	DiamondTrap		john("Jonathan");

	std::cout << std::endl;
	john.whoAmI();
	std::cout << std::endl;
	john.attack("James");
	std::cout << std::endl;
	john.highFivesGuys();
	std::cout << std::endl;
	john.takeDamage(10);
	std::cout << std::endl;
}
