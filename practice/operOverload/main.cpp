/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:01:38 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 18:22:30 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"
#include <iostream>

int main() {

	Integer		myInt(15);
	Integer		myLowInt(2);
	Integer		myBigInt(1000);
	myInt = Integer(100);
	std::cout << myInt << std::endl;
	myInt = myLowInt + myBigInt;
	std::cout << myInt << std::endl;
}
