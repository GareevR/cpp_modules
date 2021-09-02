/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:54:54 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 20:39:51 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.hpp"

void	errorHandler(const std::string errorMessage, int exitCode) {
	std::cout << "Error: " << errorMessage << std::endl;
	exit(exitCode);
}

void	setStringArray(std::string myStrings[], char *av[]) {

	char	c;
	std::ifstream	file;

	file.open(av[1]);
	if (!file.is_open())
		errorHandler("Unable to open source file", 2);
	while ((c = file.get()) != EOF)
		myStrings[0] += c; // full file data
	myStrings[1] = av[2]; // first string
	myStrings[2] = av[3]; // second string
	myStrings[3] = av[1];
	myStrings[3].append(".replace"); // new fileName
	file.close();
}

void	exchangeStrings(std::string myStrings[]) {

	for (int i = 0; (i = myStrings[0].find(myStrings[1], i)) != -1; ) {
		myStrings[0].erase(i, myStrings[1].length()); // deleting old string
		myStrings[0].insert(i, myStrings[2]); // inserting new string
		i += myStrings[2].length();
	}
}

void	writeNewFile(std::string myStrings[]) {

	std::ofstream	newFile;

	newFile.open(myStrings[3]);
	if (!newFile.is_open())
		errorHandler("Unable to create / open output file", 3);
	newFile.write(myStrings[0].data(), myStrings[0].length());
	newFile.close();
}
