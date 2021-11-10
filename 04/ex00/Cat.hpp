/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:36:50 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 20:54:57 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat: public Animal
{
	private:

	public:
		Cat(void);
		Cat(Cat const & src);
		Cat&	operator=(Cat const & rhs);
		~Cat();

		void		makeSound(void) const;
};

#endif
