/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:02:23 by macservis         #+#    #+#             */
/*   Updated: 2021/07/14 17:39:26 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(char p1, int p2, float p3) {

	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1: " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2: " << this->a2 << std::endl;


	this->a3 = p3;
	std::cout << "this->a3: " << this->a3 << std::endl;

	return ;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

