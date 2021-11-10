/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:11:59 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 20:26:31 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_fractionalBits;
public:
	Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed&		operator=(Fixed const & rhs);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
