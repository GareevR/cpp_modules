/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:03:45 by macservis         #+#    #+#             */
/*   Updated: 2021/09/07 16:08:01 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
private:
	std::string	name;
	Weapon		*_weapon; // may not exist
public:
	HumanB(std::string name);
	~HumanB();

	void		attack(void) const;
	void		setWeapon(Weapon& weapon);
};

#endif
