/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample8.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:04:02 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 18:16:13 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample8.class.hpp"
#include <iostream>

Sample8::Sample8(void)
				: foo(0)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample8::~Sample8(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample8::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}
