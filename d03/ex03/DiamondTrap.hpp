/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:59:31 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 16:28:27 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap: public FragTrap, public ScavTrap
{

private:
	std::string		_d_name;
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	DiamondTrap&	operator=(DiamondTrap const & rhs);
	~DiamondTrap();

	void			attack(std::string const & target);
	void			whoAmI(void);
};

#endif
