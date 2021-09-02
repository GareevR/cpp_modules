/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:02:45 by macservis         #+#    #+#             */
/*   Updated: 2021/08/28 20:07:23 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "iostream"

class Character: public ICharacter
{
	private:
		std::string		_name;
		AMateria*		_inventory[4];
		int				_inventoryIndex[4];
		int				_index;
	public:
		Character(Character const & src);
		Character(void);
		Character(std::string const & name);
		~Character();

		Character&	operator=(Character const & rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
