/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:24:04 by macservis         #+#    #+#             */
/*   Updated: 2021/09/07 13:56:05 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(void) :
				index(-1)
{
	std::string	firstName = "";
	std::string	lastName = "";
	std::string	nickname = "";
	std::string phoneNumber = "";
	std::string darkestSecret = "";
}

Contact::~Contact(void)
{
	// return ;
}

void	Contact::addContact(int index)
{
	std::cout << "Adding new contact. All fields must be filled." << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	this->index = index + 1;
	std::cout << "Enter your first name: " << std::endl;
	this->_addValue(&this->firstName);
	std::cout << "Enter your last name: " << std::endl;
	this->_addValue(&this->lastName);
	std::cout << "Enter your nickname: " << std::endl;
	this->_addValue(&this->nickname);
	std::cout << "Enter your phone number: " << std::endl;
	this->_addValue(&this->phoneNumber);
	std::cout << "Enter your darkest secret: " << std::endl;
	this->_addValue(&this->darkestSecret);
}

void	Contact::_addValue(std::string *str)
{
	std::string		input;

	while (input.length() == 0)
		std::getline(std::cin, input);
	*str = input;
}

void	Contact::showContact(void) const
{
	if (this->index != -1)
	{
		std::cout << "|" << std::setw(10) << this->index << "|";
		printValue(this->firstName);
		printValue(this->lastName);
		printValue(this->nickname);
		std::cout << std::endl;
	}
}

void	Contact::printValue(std::string str) const
{
	std::string		output;

	output = str;
	if (output.length() > 10)
	{
		output.erase(9);
		output.append(".");
		std::cout << std::setw(10) << output;
	}
	else
		std::cout << std::setw(10) << output;
	std::cout << "|";
}
