/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:15:42 by macservis         #+#    #+#             */
/*   Updated: 2021/09/10 14:37:02 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t length, void func(T const &)) {

	for (size_t i = 0; i < length; i++) {
		func(array[i]);
	}
}

// template <typename T>
// void	iter(T *array, size_t length, void (*func)(T const &)) {

	// for (size_t i = 0; i < length; i++) {
		// func(array[i]);
	// }
// }

#endif
