/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:00:50 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 19:46:31 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "Bureaucrat.hpp"

int		main() {

	// To low initialization
	try {
		Bureaucrat		james("James", 151);
	}
	catch (std::exception & e) {
		std::cout << "Bureaucrat creating fail. Reason: " << e.what() << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	// To high initialization
	try {
		Bureaucrat		john("John", 0);
	}
	catch (std::exception & e) {
		std::cout << "Bureaucrat creating fail. Reason: " << e.what() << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	// Too high grade
	Bureaucrat		harry("Harry", 1);

	harry.decrementGrade();
	std::cout << harry << std::endl;
	harry.incrementGrade();
	std::cout << harry << std::endl;
	try {
		harry.incrementGrade();
	}
	catch (std::exception & e) {
		std::cout << "Grade incrementation fail. Reason: " << e.what() << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	// Too low grade
	Bureaucrat		peter("Peter", 150);

	peter.incrementGrade();
	std::cout << peter << std::endl;
	peter.decrementGrade();
	std::cout << peter << std::endl;
	try {
		peter.decrementGrade();
	}
	catch (std::exception & e) {
		std::cout << "Grade decrementation fail. Reason: " << e.what() << std::endl;
	}
}
