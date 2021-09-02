/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 13:19:18 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 13:59:52 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(/* args */);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	ScavTrap&	operator=(ScavTrap const & rhs);
	~ScavTrap();

	void		guardGate(void);
};

#endif
