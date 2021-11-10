/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:04:14 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 21:10:05 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string		_target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & rhs);
	~ShrubberyCreationForm();

	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
