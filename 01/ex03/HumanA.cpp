/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:06:47 by macservis         #+#    #+#             */
/*   Updated: 2021/09/07 16:06:45 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
									_weapon(weapon),
									_name(name) {}

HumanA::~HumanA() {

}

void	HumanA::setWeapon(Weapon& weapon) {
	this->_weapon = weapon;
}

void	HumanA::attack(void) const {
	std::cout <<
		this->_name <<
		" attacks with his " <<
		this->_weapon.getType() <<
	std::endl;
}
