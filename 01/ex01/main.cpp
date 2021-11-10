/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:37:53 by macservis         #+#    #+#             */
/*   Updated: 2021/08/17 18:44:54 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* horde;


	horde = zombieHorde(20, "James");
	for (int i = 0; i < 20; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
