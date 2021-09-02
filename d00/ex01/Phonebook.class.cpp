/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:57:11 by macservis         #+#    #+#             */
/*   Updated: 2021/07/20 17:55:37 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) :
					index(-1)
{
	// return ;
}

PhoneBook::~PhoneBook(void)
{
	// return ;
}

void	PhoneBook::checkInput(void)
{
	while (input.length() == 0)
		std::getline(std::cin, this->input);
	if (this->input == "EXIT")
		exit (0);
	else if (this->input == "SEARCH")
		this->searchContacts();
	else if (this->input == "ADD")
	{
		if (this->index < 7)
			this->index++;
		else
			this->index = 0;
		this->contacts[this->index].addContact(this->index);
	}
	this->input = "";
}

void	PhoneBook::searchContacts(void) const
{
	std::cout <<
	"|     index|first name| last name|  nickname|" << std::endl;
	for (int x = 0; x < 8; x++)
	{
		this->contacts[x].showContact();
	}
}

void	PhoneBook::addContact(void)
{
	this->contacts[this->index].addContact(this->index);
}
