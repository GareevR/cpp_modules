/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:02:15 by macservis         #+#    #+#             */
/*   Updated: 2021/09/07 16:08:15 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
private:
	/* data */
	std::string		 	_type;
public:
	Weapon(std::string type);
	~Weapon();

	const std::string&	getType(void) const;
	void				setType(std::string type);
};

#endif
