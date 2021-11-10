/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:11:59 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 21:32:50 by macservis        ###   ########.fr       */
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

	Fixed&			operator=(Fixed const & rhs);

	Fixed&			operator++(void);
	Fixed			operator++(int);
	Fixed&			operator--(void);
	Fixed			operator--(int);

	Fixed			operator+(Fixed const & rhs);
	Fixed			operator-(Fixed const & rhs);
	Fixed			operator/(Fixed const & rhs);
	Fixed			operator*(Fixed const & rhs);

	bool			operator<(Fixed const & rhs);
	bool			operator>(Fixed const & rhs);
	bool			operator>=(Fixed const & rhs);
	bool			operator<=(Fixed const & rhs);
	bool			operator==(Fixed const & rhs);
	bool			operator!=(Fixed const & rhs);

	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;

	static Fixed&		min(Fixed & left, Fixed & right);
	static const Fixed&	min(Fixed const & left, Fixed const & right);

	static Fixed&		max(Fixed & left, Fixed & right);
	static const Fixed&	max(Fixed const & left, Fixed const & right);


};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
