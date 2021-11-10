/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:11:59 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 19:26:43 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int					_value;
	static const int	_fractionalBits;
public:
	Fixed(void);
	Fixed(Fixed const & src);

	Fixed&		operator=(Fixed const & rhs);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);


	~Fixed();
};

#endif
