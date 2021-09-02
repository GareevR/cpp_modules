/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample6.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:35:04 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 14:50:50 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample6.class.hpp"
#include <iostream>

Sample6::Sample6(int x)
{
	std::cout << "Constructor called" << std::endl;
	this->_foo = x;
	// std::cout << "this->publicFoo: " << this->publicFoo << std::endl;

	return ;
}

Sample6::~Sample6(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Sample6::getFoo(void) const
{
	return (this->_foo);
}

int		Sample6::compare(Sample6 *other) const
{
	if (this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}
