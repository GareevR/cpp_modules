/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 23:26:47 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 23:55:18 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {

	// std::cout << "Default Intern constructor called" << std::endl;

	_formFnArray[0] = &Intern::_newRobotomyRequestForm;
	_formNameArray[0] = "robotomy request";

	_formFnArray[1] = &Intern::_newPresidentalPardonForm;
	_formNameArray[1] = "presidental pardon";

	_formFnArray[2] = &Intern::_newShrubberyCreationForm;
	_formNameArray[2] = "shrubbery creation";

	return ;
}

Intern::Intern(Intern const & src) {

	// std::cout << "Copy Intern constructor called" << std::endl;

	*this = src;
	return ;
}

Intern::~Intern() {

	// std::cout << "Intern destructor called" << std::endl;

	return ;
}

Intern &	Intern::operator=(Intern const & rhs) {

	if (this != &rhs) {
		for (int i = 0; i < 3; i++) {
			this->_formNameArray[i] = rhs._formNameArray[i];
			this->_formFnArray[i] = rhs._formFnArray[i];
		}
	}
	return *this;
}

Form*	Intern::_newPresidentalPardonForm(std::string const & target) {

	Form*	form = new PresidentialPardonForm(target);

	return form;
}

Form*	Intern::_newRobotomyRequestForm(std::string const & target) {

	Form*	form = new RobotomyRequestForm(target);

	return form;
}

Form*	Intern::_newShrubberyCreationForm(std::string const & target) {

	Form*	form = new ShrubberyCreationForm(target);

	return form;
}

Form*	Intern::makeForm(std::string const & formType, std::string const & target) {

	bool formIsFound = false;

	for (int i = 0; i < 3; i++) {
		if (formType == _formNameArray[i]) {
			formIsFound = true;
			std::cout << "Intern creates <" << _formNameArray[i] << ">" << std::endl;
			return (this->*_formFnArray[i])(target);
		}
	}
	if (!formIsFound)
		std::cout << "Could not create form: Requested form not found" << std::endl;
	return 0;
}
