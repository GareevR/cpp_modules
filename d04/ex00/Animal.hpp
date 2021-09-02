/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:42:04 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 20:47:25 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string		type;
	public:
		Animal(void);
		Animal(Animal const & src);
		Animal&	operator=(Animal const & rhs);
		~Animal();

		virtual void	makeSound(void) const;
		std::string	getType(void) const;

};

#endif
