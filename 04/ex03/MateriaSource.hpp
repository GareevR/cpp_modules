/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:12:29 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 15:31:52 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria*		_inventory[4];
	int				_inventoryIndex[4];
	int				_index;

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	~MateriaSource();

	MateriaSource&	operator=(MateriaSource const & rhs);

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
};

#endif
