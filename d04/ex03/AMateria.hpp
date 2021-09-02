/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 15:57:46 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 19:39:24 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	protected:
		std::string		type;
	public:
		AMateria();
		AMateria(AMateria const & src);
		AMateria(std::string const & type);
		virtual ~AMateria();

		AMateria&	operator=(AMateria const & rhs);

		std::string const & getType(void) const; // Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif
