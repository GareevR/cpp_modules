/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:40:37 by macservis         #+#    #+#             */
/*   Updated: 2021/09/06 17:39:30 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

class ValueNotFound: public std::exception {
	public:
		virtual const char * what() const throw() {
			return ("Could not find value in container");
		}
};

template <typename Container>
void	easyfind(Container const &collection, int value) {

	typename	Container::const_iterator	it;

	it = std::find(collection.begin(), collection.end(), value);
	if (it != collection.end())
			std::cout << "Value found!" << std::endl;
	else
		throw ValueNotFound();
}

#endif
