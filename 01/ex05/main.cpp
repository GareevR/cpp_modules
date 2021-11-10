/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:01:38 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 20:04:06 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void) {

	Karen	myKaren;

	myKaren.complain("DEBUG");
	myKaren.complain("WARNING");
	myKaren.complain("INFO");
	myKaren.complain("ERROR");

}
