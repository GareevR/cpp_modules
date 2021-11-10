/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:15:44 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 20:53:32 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("ShrubberyCreationForm", 145, 137)
{
	// std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	// std::cout << "Parametric ShrubberyCreationForm constructor called" << std::endl;

 	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
	Form(src.getName(), 145, 137)
{
	// std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;

	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

	// std::cout << "ShrubberyCreationForm destructor called" << std::endl;

	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	if (this != &rhs) {
		this->_target = rhs._target;
	}
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	std::ofstream	newFile;

	allowedToExecute(executor);
	newFile.open(this->_target + "_shrubbery");
	if (!newFile.is_open()) {
		std::cout << "Unable to create / open output file" << std::endl;
	} else {
		newFile << "         v" << std::endl;
		newFile << "        >X<" << std::endl;
		newFile << "         A" << std::endl;
		newFile << "        d$b" << std::endl;
		newFile << "      .d\\$$b." << std::endl;
		newFile << "    .d$i$$\\$$b." << std::endl;
		newFile << "       d$$@b" << std::endl;
		newFile << "      d\\$$$ib" << std::endl;
		newFile << "    .d$$$\\$$$b" << std::endl;
		newFile << "  .d$$@$$$$\\$$ib." << std::endl;
		newFile << "      d$$i$$b" << std::endl;
		newFile << "     d\\$$$$@$b" << std::endl;
		newFile << "  .d$@$$\\$$$$$@b." << std::endl;
		newFile << ".d$$$$i$$$\\$$$$$$b." << std::endl;
		newFile << "        ###" << std::endl;
		newFile << "        ###" << std::endl;
		newFile << "        ###" << std::endl;
		newFile.close();
	}
}
