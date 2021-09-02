/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:56:14 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 21:09:44 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("PresidentialPardonForm", 25, 5)
{
	// std::cout << "Default PresidentialPardonForm constructor called" << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
	// std::cout << "Parametric PresidentialPardonForm constructor called" << std::endl;

 	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
	Form(src.getName(), 25, 5)
{
	// std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;

	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() {

	// std::cout << "PresidentialPardonForm destructor called" << std::endl;

	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	if (this != &rhs) {
		this->_target = rhs._target;
	}
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	allowedToExecute(executor);
	std::cout <<
		this->_target << " has been pardoned by Zafod Beeblebrox.." <<
	std::endl;
}
