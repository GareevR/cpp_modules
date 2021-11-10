/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 20:33:48 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 20:53:55 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) {

	std::cout << "Default WrongCat constructor called" << std::endl;

	this->type = "WrongCat";

	return ;
}

WrongCat::WrongCat(WrongCat const & src) {

	std::cout << "Copy WrongCat constructor called" << std::endl;

	*this = src;
	return ;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called" << std::endl;

	return ;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs) {

	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

void		WrongCat::makeSound(void) const {
	std::cout << "I'm a wrong cat, bitch. MEOW MEOW!" << std::endl;
}
