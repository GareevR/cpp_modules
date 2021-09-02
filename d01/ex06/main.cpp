/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:01:38 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 20:48:03 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char *av[]) {

	Karen	myKaren;

	if (ac != 2)
		std::cout << "Invalid number of arguments" << std::endl;
	else
		myKaren.complain(av[1]);
}
