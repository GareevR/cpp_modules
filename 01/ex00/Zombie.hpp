/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:15:38 by macservis         #+#    #+#             */
/*   Updated: 2021/08/17 18:35:11 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
private:
	std::string _login;
	std::string _getName(void) const;
public:
	Zombie(std::string name);
	~Zombie();

	void	announce(void) const;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
