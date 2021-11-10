/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:21:11 by macservis         #+#    #+#             */
/*   Updated: 2021/08/17 18:42:04 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _login(name) {}

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << "Zombie " <<  this->_login << " died" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_login << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_login = name;
}
