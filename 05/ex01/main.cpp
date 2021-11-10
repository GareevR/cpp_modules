/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:00:50 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 19:47:27 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main() {

	Bureaucrat		harry("Harry", 1);
	Bureaucrat		james("James", 150);

	Form			g23("G23", 100, 120);

	try {
		Form	b23("B23", 200, 120);
	} catch (std::exception & e) {
		std::cout <<
			"Form was not created! Reason: " <<
			e.what() <<
		std::endl;
	}

	std::cout << "-------------------" << std::endl;

	std::cout << g23 << std::endl;

	std::cout << "-------------------" << std::endl;

	james.signForm(g23);
	harry.signForm(g23);

	std::cout << "-------------------" << std::endl;
	std::cout << g23 << std::endl;

	return 0;
}
