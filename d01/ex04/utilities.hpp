/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:47:05 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 18:10:28 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <iostream>
#include <fstream>
#include <string>

void	errorHandler(const std::string errorMessage, int exitCode);
void	setStringArray(std::string myStrings[], char *av[]);
void	exchangeStrings(std::string myStrings[]);
void	writeNewFile(std::string myStrings[]);

#endif
