/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:14:45 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 17:51:16 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
private:
	/* data */
public:
	Cure(void);
	Cure(Cure const & src);
	Cure&	operator=(Cure const & rhs);
	~Cure();

	std::string	const &	getType(void) const;
	AMateria*			clone(void) const;
	void				use(ICharacter& target);
};

#endif
