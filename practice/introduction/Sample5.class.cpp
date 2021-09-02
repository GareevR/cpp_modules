/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample5.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:15:58 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 14:26:28 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample5.class.hpp"
#include <iostream>

Sample5::Sample5(void) :
				_foo(10)
{
	std::cout << "Constructor called" << std::endl;
	// std::cout << "this->publicFoo: " << this->publicFoo << std::endl;

	return ;
}

Sample5::~Sample5(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Sample5::getFoo(void) const
{
	return (this->_foo);
}

void	Sample5::setFoo(int v)
{
	if (v >= 0)
		this->_foo = v;
	return ;
}
