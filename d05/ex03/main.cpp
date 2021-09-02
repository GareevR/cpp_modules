/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:00:50 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 23:57:37 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int		main() {

	Intern	someRandomIntern;
	Form*	rrf;
	Bureaucrat		peter("Peter", 1);

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	// rrf = someRandomIntern.makeForm("robotomy requests", "Bender");
	std::cout << *rrf << std::endl;
	std::cout << "------------------------" << std::endl;
	peter.signForm(*rrf);
	std::cout << "------------------------" << std::endl;
	std::cout << *rrf << std::endl;
	std::cout << "------------------------" << std::endl;
	peter.executeForm(*rrf);
	return 0;
}
