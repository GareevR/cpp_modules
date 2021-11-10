/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:56:14 by macservis         #+#    #+#             */
/*   Updated: 2021/09/08 22:11:27 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>


bool	RobotomyRequestForm::_robotomyWorks = true;

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("RobotomyRequestForm", 72, 45)
{
	// std::cout << "Default RobotomyRequestForm constructor called" << std::endl;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
	// std::cout << "Parametric RobotomyRequestForm constructor called" << std::endl;

 	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
	Form(src.getName(), 72, 45)
{
	// std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;

	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	// std::cout << "RobotomyRequestForm destructor called" << std::endl;

	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	if (this != &rhs) {
		this->_target = rhs._target;
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	allowedToExecute(executor);
	std::cout << "*SOME DRILLING NOISES* ";
	if (RobotomyRequestForm::_robotomyWorks) {
		std::cout << this->_target << " has been robotomized successfully.";
		RobotomyRequestForm::_robotomyWorks = false;
	}
	else {
		std::cout << this->_target << " robotomization failure. R.I.P.";
		RobotomyRequestForm::_robotomyWorks = true;
	}
	std::cout << std::endl;
}
