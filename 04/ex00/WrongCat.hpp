/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:36:50 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 20:48:06 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal
{
	private:

	public:
		WrongCat(void);
		WrongCat(WrongCat const & src);
		WrongCat&	operator=(WrongCat const & rhs);
		~WrongCat();

		void		makeSound(void) const;
};

#endif
