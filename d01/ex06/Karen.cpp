/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:02:03 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 20:44:56 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}

void	Karen::debug(void) {
	std::cout <<
	"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" <<
	std::endl;
}

void	Karen::info(void) {
	std::cout <<
	"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" <<
	std::endl;
}

void	Karen::warning(void) {
	std::cout <<
	"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." <<
	std::endl;
}

void	Karen::error(void) {
	std::cout <<
	"This is unacceptable, I want to speak to the manager now." <<
	std::endl;
}

void	Karen::printComplain(complainPtr funPtrArray[], std::string lvlArray[], std::string level) {

	int	isInComplaints = 0;

	for (int i = 0; i < 4; i++) {
		if (level == lvlArray[i]) {
			isInComplaints = 1;
			for (int j = i; j < 4; j++) {
				std::cout << "[ " << lvlArray[j] << " ]" << std::endl;
				(this->*funPtrArray[j])();
			}
		}
	}
	if (!isInComplaints)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::complain(std::string level) {

	complainPtr	funPtrArray[]= {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
	};
	std::string	lvlArray[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	printComplain(funPtrArray, lvlArray, level);
}