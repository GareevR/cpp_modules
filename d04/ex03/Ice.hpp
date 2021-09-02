/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:14:45 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 19:48:14 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
private:
	/* data */
public:
	Ice(void);
	Ice(Ice const & src);
	Ice&	operator=(Ice const & rhs);
	~Ice();

	std::string	const &	getType(void) const;
	AMateria*			clone(void) const;
	void				use(ICharacter& target);
};

#endif
