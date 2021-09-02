/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:14:29 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 16:17:06 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	FragTrap&	operator=(FragTrap const & rhs);
	~FragTrap();

	void		highFivesGuys(void);
	void		attack(std::string const & target);

};

#endif
