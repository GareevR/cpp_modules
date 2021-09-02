/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:42:04 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 20:47:25 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string		type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal&	operator=(WrongAnimal const & rhs);
		~WrongAnimal();

		void	makeSound(void) const;
		std::string		getType(void) const;

};

#endif
