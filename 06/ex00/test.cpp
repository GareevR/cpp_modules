/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:27:23 by macservis         #+#    #+#             */
/*   Updated: 2021/09/03 16:29:33 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main () {
	std::string str = "24.1f5";

	float	x;

	x = std::stod(str);
	std::cout << x << std::endl;

}
