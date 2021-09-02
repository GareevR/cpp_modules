/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample7.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:42:44 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 17:47:14 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample7.class.hpp"
#include <iostream>

Sample7::Sample7(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample7::_nbInsts += 1;
	// std::cout << "this->publicFoo: " << this->publicFoo << std::endl;

	return ;
}

Sample7::~Sample7(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample7::_nbInsts -= 1;
	return ;
}

int	Sample7::getNbInst(void)
{
	return Sample7::_nbInsts;
}

int	Sample7::_nbInsts = 0;
