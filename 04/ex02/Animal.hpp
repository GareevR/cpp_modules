/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:42:04 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 18:41:13 by macservis        ###   ########.fr       */
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
		Animal(std::string & types);
		Animal(Animal const & src);
		virtual ~Animal();

		Animal&	operator=(Animal const & rhs);

		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
};

#endif
