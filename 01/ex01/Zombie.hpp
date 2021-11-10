/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:15:38 by macservis         #+#    #+#             */
/*   Updated: 2021/08/17 18:40:57 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _login;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void	setName(std::string name);
	void	announce(void) const;
};

Zombie* zombieHorde(int N, std::string name);

#endif
