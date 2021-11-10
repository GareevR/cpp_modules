/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:59:43 by macservis         #+#    #+#             */
/*   Updated: 2021/08/17 18:38:59 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

	Zombie* zombieArray = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombieArray[i].setName(name);
	}
	return zombieArray;
}
