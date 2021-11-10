/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 21:15:01 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 22:29:23 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {

	std::cout << "Default Brain constructor called" << std::endl;

	return ;
}

Brain::Brain(Brain const & src) {

	std::cout << "Copy Brain constructor called" << std::endl;

	*this = src;
	return ;
}

Brain::~Brain() {

	std::cout << "Brain destructor called" << std::endl;

	return ;
}

Brain &	Brain::operator=(Brain const & rhs) {

	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}
