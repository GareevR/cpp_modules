/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample3.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:08:25 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 13:20:17 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample3.class.hpp"

Sample3::Sample3(float const f) :
					pi(f), qd(42)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample3::~Sample3(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample3::bar(void) const
{
	std::cout << "this->pi: " << this->pi << std::endl;
	std::cout << "this->qd: " << this->qd << std::endl;

	return ;
}
