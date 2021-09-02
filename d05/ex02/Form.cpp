/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:30:42 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 20:53:12 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) :
	_name("Default"), _signGrade(1),
	_executeGrade(1), _isSigned(false)
{
	// std::cout << "Default Form constructor called" << std::endl;

	return ;
}

Form::Form(std::string const & name, int signGrade, int executeGrade) :
	_name(name), _signGrade(signGrade),
	_executeGrade(executeGrade), _isSigned(false)
{
	// std::cout << "Parametric Form constructor called" << std::endl;

	if (executeGrade < 1 || signGrade < 1) {
		throw GradeTooHighException();
	}
	else if (signGrade > 150 || executeGrade > 150) {
		throw GradeTooLowException();
	}
 	return ;
}

Form::Form(Form const & src) :
	_name(src._name), _signGrade(src._signGrade),
	_executeGrade(src._executeGrade)
{
	// std::cout << "Copy Form constructor called" << std::endl;

	*this = src;
	return ;
}

Form::~Form() {

	// std::cout << "Form destructor called" << std::endl;

	return ;
}

int	Form::getExecuteGrade(void) const {
	return this->_executeGrade;
}

int	Form::getSignGrade(void) const {
	return this->_signGrade;
}

const std::string	Form::getName(void) const {
	return this->_name;
}

bool		Form::isSigned(void) const {
	return this->_isSigned;
}

void		Form::beSigned(Bureaucrat const & employee) {
	if (employee.getGrade() > this->_signGrade) {
		throw GradeTooLowException();
	}
	else {
		this->_isSigned = true;
	}
}

void		Form::allowedToExecute(Bureaucrat const & executor) const {

	if (!this->_isSigned) {
		throw FormIsNotSigned();
	}
	else if (executor.getGrade() > this->_executeGrade) {
		throw GradeTooLowException();
	}
}

Form &	Form::operator=(Form const & rhs) {

	if (this != &rhs) {
		this->_isSigned = rhs.isSigned();
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & i) {

	o <<
		"Form name: " << i.getName() <<
		". Form sign grade: " << i.getSignGrade() <<
		". Form execution grade: " << i.getExecuteGrade() <<
		". Form is signed: ";
	if (i.isSigned()) {
		o << "Yes.";
	} else {
		o << "No.";
	}
	return o;
}

