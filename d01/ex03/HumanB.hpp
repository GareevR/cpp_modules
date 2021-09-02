/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:03:45 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 18:57:45 by macservis        ###   ########.fr       */
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
	/* data */
public:
	HumanB(std::string name);
	~HumanB();

	std::string	name;
	Weapon		*weapon; // may not exist

	void		attack(void) const;
	void		setWeapon(Weapon& weapon);

};

#endif
