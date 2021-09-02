/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:02:41 by macservis         #+#    #+#             */
/*   Updated: 2021/09/01 17:16:31 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <exception>
#include <iostream>

class Converter
{
private:
	// char	_masterChar;
	double	_masterDouble;
	void	_checkConversion(void) const;
	void	_checkDisplay(void)	const;
	int		_precision;
public:
	Converter(void);
	Converter(double masterDouble, int precision);
	Converter(char masterChar);
	Converter(Converter const & src);
	Converter&	operator=(Converter const & rhs);
	~Converter();

	class NonDisplayable: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Non displayable");
			}
	};
	class ConversionImpossible: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("impossible");
			}
	};

	void	convertToChar(void) const;
	void	convertToInt(void) const;
	void	convertToFloat(void) const;
	void	convertToDouble(void) const;

};

#endif
