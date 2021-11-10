/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:34:04 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 19:48:50 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(1) {

	// std::cout << "Default Bureaucrat constructor called" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name) {

	// std::cout << "Parametric Bureaucrat constructor called" << std::endl;

	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	} else {
		// this->_name = name;
		this->_grade = grade;
	}
 	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {

	// std::cout << "Copy Bureaucrat constructor called" << std::endl;

	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat() {

	// std::cout << "Bureaucrat destructor called" << std::endl;

	return ;
}

void	Bureaucrat::incrementGrade(void) {

	if (this->_grade == 1) {
		throw GradeTooHighException();
	} else {
		this->_grade--;
	}
}

void	Bureaucrat::decrementGrade(void) {

	if (this->_grade == 150) {
		throw GradeTooLowException();
	} else {
		this->_grade++;
	}
}

int		Bureaucrat::getGrade(void) const {
	return this->_grade;
}

const std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

void	Bureaucrat::signForm(Form & form) {

	try {
		form.beSigned(*this);
		std::cout <<
			this->_name << " signs " << form.getName() <<
		std::endl;
	}
	catch (std::exception & e) {
		std::cout <<
			this->_name << " cannot sign " <<
			form.getName() << ". Reason: " << e.what() <<
		std::endl;
	}
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs) {

	if (this != &rhs) {
		this->_grade = rhs._grade;
		// this->_name = rhs._name;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i) {
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}

