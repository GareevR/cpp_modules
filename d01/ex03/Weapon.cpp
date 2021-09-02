/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:02:07 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 18:54:36 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
}

Weapon::~Weapon() {
}

const std::string&	Weapon::getType(void) const {
	return type;
}

void				Weapon::setType(std::string type) {
	this->type = type;
}

