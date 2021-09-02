/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:21:58 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 00:24:25 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

	ClapTrap	rusty("Rusty James");

	rusty.attack("Anus");
	rusty.takeDamage(5);
	rusty.beRepaired(20);
}
