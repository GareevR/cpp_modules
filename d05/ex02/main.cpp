/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:00:50 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 23:16:55 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main() {

	Bureaucrat		harry("Harry", 1);
	Bureaucrat		james("James", 150);

	PresidentialPardonForm	henry("Henry");
	RobotomyRequestForm		bender("Bender");
	ShrubberyCreationForm	trees("Trees");

	std::cout << "-------------------" << std::endl;

	std::cout << henry << std::endl;
	james.signForm(henry);
	harry.signForm(henry);
	std::cout << "-------------------" << std::endl;
	james.executeForm(henry);
	harry.executeForm(henry);
	harry.executeForm(trees);
	// james.signForm(g23);
	// harry.signForm(g23);

	std::cout << "-------------------" << std::endl;
	// std::cout << g23 << std::endl;

	return 0;
}
