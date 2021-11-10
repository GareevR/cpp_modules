/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:30:25 by macservis         #+#    #+#             */
/*   Updated: 2021/09/07 13:47:37 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

int		main(void)
{
	PhoneBook	phonebook;

	std::cout << "WELCOME, UNWORTHY PEASANTS!" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (1)
	{
		phonebook.checkInput();
	}
}
