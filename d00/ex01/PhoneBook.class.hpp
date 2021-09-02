/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:22:56 by macservis         #+#    #+#             */
/*   Updated: 2021/07/20 17:19:26 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"
# include <string>

class PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	std::string	input;
	int			index;
	Contact 	contacts[8];
	void		checkInput(void);
	void		searchContacts(void) const;
	void		addContact(void);
};

#endif
