/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:37:53 by macservis         #+#    #+#             */
/*   Updated: 2021/08/17 17:57:32 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* anotherZombie;

	randomChump("James Z.");
	anotherZombie = newZombie("Hilbert");
	anotherZombie->announce();
	delete anotherZombie;
	return 0;
}
