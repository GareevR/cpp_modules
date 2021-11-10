/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:45:19 by macservis         #+#    #+#             */
/*   Updated: 2021/09/06 21:56:06 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>
# include <iomanip>

class Contact
{
public:
	Contact(/* args */);
	~Contact();

	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	int			index;

	void		showContact(void) const;
	void		addContact(int index);
	void		printValue(std::string str) const;

private:
	void		_addValue(std::string *str);
};

#endif
