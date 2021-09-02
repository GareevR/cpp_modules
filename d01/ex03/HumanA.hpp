/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:03:01 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 15:38:36 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
private:
	/* data */
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	Weapon&		weapon;
	std::string name;

	void	setWeapon(Weapon& weapon);
	void	attack(void) const;
};

#endif
