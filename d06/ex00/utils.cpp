/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:49:04 by macservis         #+#    #+#             */
/*   Updated: 2021/09/02 01:48:37 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

bool	isChar(char *str) {

	if (strlen(str) == 1 && !(str[0] >= '0' && str[0] <= '9')) {
		return true;
	}
	return false;
}

int		getPrecision(char *str) {

	int x = 0;
	int	precision = -1;

	while (str[x] && str[x] != '.') {
		x++;
	}
	while (str[x] != '\0' && str[x] != 'f') {
		x++;
		precision++;
	}
	return precision;
}


void	parseNormalValues(char *str) {

	int		fs = 0;
	int		dots = 0;
	int		signs = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '-' || str[i] == '+') {
			signs++;
		} else if (str[i] == '.') {
			dots++;
		} else if (str[i] == 'f') {
			fs++;
		} else if (str[i] < '0' || str[i] > '9') {
			std::cout << "invalid value" << std::endl;
			exit(1);
		}
	}
	if (fs > 1 || dots > 1 || signs > 1 || (fs == 1 && dots == 0)) {
		std::cout << "invalid value" << std::endl;
		exit(1);
	}
}

void	parser(char *str) {

	const char	*strArray[] = {
		"-inf",
		"-inf",
		"-inff",
		"+inff",
		"inff",
		"inf",
		"nan",
		"nanf"
	};
	for (int x = 0; x < 8; x++) {
		if (strcmp(str, strArray[x]) == 0)
			return ;
	}
	if (strlen(str) == 1)
		return ;
	parseNormalValues(str);
}
