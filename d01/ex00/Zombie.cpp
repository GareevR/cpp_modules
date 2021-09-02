/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:21:11 by macservis         #+#    #+#             */
/*   Updated: 2021/08/17 18:31:28 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _login(name) {
	// constructor code
}

Zombie::~Zombie() {
	std::cout << "Zombie " <<  _getName() << " died" << std::endl;
}

void Zombie::announce(void) const {
	std::cout << "<" << _getName() << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::_getName(void) const {
	return this->_login;
}
