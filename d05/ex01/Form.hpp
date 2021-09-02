/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:30:42 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 19:42:55 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_signGrade;
	const int			_executeGrade;
	bool				_isSigned;
public:
	Form(void);
	Form(std::string const & name, int signGrade, int executeGrade);
	Form(Form const & src);
	Form&	operator=(Form const & rhs);
	~Form();

	class GradeTooHighException: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too high!");
			}
	};
	class GradeTooLowException: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too low!");
			}
	};

	const std::string	getName(void) const;
	int			getExecuteGrade(void) const;
	int			getSignGrade(void) const;
	bool		isSigned(void) const;
	void		beSigned(Bureaucrat const & employee);
};

std::ostream & operator<<(std::ostream & o, Form const & i);

#endif
