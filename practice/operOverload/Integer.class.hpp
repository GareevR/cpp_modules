/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:27:00 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 17:31:45 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_HPP
#define INTEGER_CLASS_HPP

#include <iostream>

class Integer
{

private:
	int		_n;
public:
	Integer(int const n);
	~Integer(void);

	int		getValue(void) const;

	Integer&	operator=(Integer const & rhs);
	Integer		operator+(Integer const & rhs) const;

};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);

#endif
