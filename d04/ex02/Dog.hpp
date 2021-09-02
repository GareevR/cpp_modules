/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:53:37 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 18:17:24 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog(void);
		Dog(Dog const & src);
		Dog&	operator=(Dog const & rhs);
		~Dog();

		void		makeSound(void) const;
};

#endif
