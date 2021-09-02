/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 23:54:20 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 19:47:19 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	std::string		_name;
	int				_hitPoints;
	int				_energyPoints;
	int				_attackDamage;
public:
	ClapTrap(/* args */);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	ClapTrap&	operator=(ClapTrap const & rhs);
	~ClapTrap();

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};



#endif
