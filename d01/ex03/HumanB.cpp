/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:04:33 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 19:00:16 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
							name(name),
							weapon(NULL) {

}

HumanB::~HumanB() {

}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void	HumanB::attack(void) const {

	if (this->weapon) {
		std::cout <<
			this->name <<
			" attacks with his " <<
			this->weapon->getType() <<
		std::endl;
	} else {
		std::cout <<
			this->name <<
			" attacks with his bare hands. Rrragh!" <<
		std::endl;
	}
}
