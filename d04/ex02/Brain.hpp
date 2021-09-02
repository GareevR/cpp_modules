/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 21:13:35 by macservis         #+#    #+#             */
/*   Updated: 2021/08/27 22:29:37 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		Brain&	operator=(Brain const & rhs);
		~Brain();

		std::string		ideas[100];
};

#endif
