/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:06:47 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 15:32:41 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
									weapon(weapon),
									name(name) {}

HumanA::~HumanA() {

}

void	HumanA::setWeapon(Weapon& weapon) {
	this->weapon = weapon;
}

void	HumanA::attack(void) const {
	std::cout <<
		this->name <<
		" attacks with his " <<
		this->weapon.getType() <<
	std::endl;
}
