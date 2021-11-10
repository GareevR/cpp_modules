/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:03:48 by macservis         #+#    #+#             */
/*   Updated: 2021/09/03 21:06:07 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T & x, T & y) {

	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T const &	max(T const & x, T const & y) {
	return (x >= y ? x : y);
}

template <typename T>
T const &	min(T const & x, T const & y) {
	return (x <= y ? x : y);
}

#endif
