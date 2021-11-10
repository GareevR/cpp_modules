/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:57:11 by macservis         #+#    #+#             */
/*   Updated: 2021/09/07 13:52:26 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

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
	std::cout << "Available commands: \"EXIT\", \"ADD\", \"SEARCH\"" << std::endl << std::endl;
	std::cout << "Enter command: ";
	while (this->input.length() == 0)
		std::getline(std::cin, this->input);
	std::cout << std::endl;
	if (this->input == "EXIT")
		exit (0);
	else if (this->input == "SEARCH")
		this->searchContacts();
	else if (this->input == "ADD") {
		if (this->index < 7)
			this->index++;
		else
			this->index = 0;
		this->contacts[this->index].addContact(this->index);
		std::cout << std::endl;
		std::cout << "Contact added!" << std::endl;
	}
	else {
		std::cout << "Invalid command!" << std::endl;
	}
	this->input = "";
}

void	PhoneBook::searchContacts(void)
{
	std::cout << "Showing available contacts" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int x = 0; x < 8; x++) {
		this->contacts[x].showContact();
	}
	_readIndex();
	int x = std::stoi(this->input) - 1;
	if ((x >= 0 && x < 8) && this->contacts[x].index != -1) {
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|     index|first name| last name|  nickname|" << std::endl;
		this->contacts[x].showContact();
		std::cout << std::endl;
	}
	else {
		std::cout << std::endl;
		std::cout << "Unexisting contact requested! Returning to main menu" << std::endl << std::endl;
	}
}

void	PhoneBook::_readIndex() {

	this->input = "";
	std::cout << std::endl;
	std::cout << "Enter contact index (from 1 to 8): ";
	while (1) {
		std::getline(std::cin, this->input);
		if (this->input.length() == 1 && std::isdigit(this->input[0]))
			break;
		else if (this->input.length() != 0) {
			std::cout << std::endl;
			std::cout << "Invalid value entered." << std::endl;
			std::cout << "Enter valid contact index (from 1 to 8): ";
		}
	}
}


void	PhoneBook::addContact(void)
{
	this->contacts[this->index].addContact(this->index);
}
