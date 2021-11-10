/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:59:38 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 19:09:24 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cctype>

int		main(int argc, char **argv)
{
	for (int i = 1; argv[i] != NULL; i++)
	{
		for (int x = 0; argv[i][x] != '\0'; x++)
			std::cout << (char)toupper((int)argv[i][x]);
		if (i != argc - 1)
			std::cout << " ";
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
