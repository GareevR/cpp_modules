/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:00:50 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 19:51:07 by macservis        ###   ########.fr       */
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

	PresidentialPardonForm	peter("Peter");
	RobotomyRequestForm		bender("Bender");
	ShrubberyCreationForm	trees("Trees");

	std::cout << "<- Presidential Pardon Form ->" << std::endl;
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << peter << std::endl;
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << "< Signing form >" << std::endl;
	james.signForm(peter);
	std::cout << std::endl;
	harry.signForm(peter);
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << "< Executing form >" << std::endl;
	james.executeForm(peter);
	std::cout << std::endl;
	harry.executeForm(peter);
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << std::endl;

	std::cout << "<- Robotomy Request Form >" << std::endl;
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << bender << std::endl;
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << "< Signing form >" << std::endl;
	james.signForm(bender);
	std::cout << std::endl;
	harry.signForm(bender);
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << "< Executing form >" << std::endl;
	james.executeForm(bender);
	std::cout << std::endl;
	harry.executeForm(bender);
	std::cout << std::endl;
	harry.executeForm(bender);

	std::cout << "<- Shrubbery Creation Form >" << std::endl;
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << trees << std::endl;
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << "< Signing form >" << std::endl;
	james.signForm(trees);
	std::cout << std::endl;
	harry.signForm(trees);
	std::cout << "------------------------------------------"<< std::endl;
	std::cout << "< Executing form >" << std::endl;
	james.executeForm(trees);
	std::cout << std::endl;
	harry.executeForm(trees);;

	return 0;
}
