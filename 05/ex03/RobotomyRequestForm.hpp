/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:54:56 by macservis         #+#    #+#             */
/*   Updated: 2021/09/09 15:00:03 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string		_target;
	static bool		_robotomyWorks;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm&	operator=(RobotomyRequestForm const & rhs);
	~RobotomyRequestForm();

	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
