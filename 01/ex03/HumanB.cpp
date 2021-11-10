/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:04:33 by macservis         #+#    #+#             */
/*   Updated: 2021/09/07 16:07:40 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
							name(name),
							_weapon(NULL) {

}

HumanB::~HumanB() {

}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const {

	if (this->_weapon) {
		std::cout <<
			this->name <<
			" attacks with his " <<
			this->_weapon->getType() <<
		std::endl;
	} else {
		std::cout <<
			this->name <<
			" attacks with his bare hands. Rrragh!" <<
		std::endl;
	}
}
