/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:50:47 by macservis         #+#    #+#             */
/*   Updated: 2021/09/06 19:43:02 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <iostream>

Span::Span(void) {

	// std::cout << "Default Span constructor called" << std::endl;

	return ;
}

Span::Span(unsigned int N) : _size(N) {

	// std::cout << "Parametric Span constructor called" << std::endl;

 	return ;
}

Span::Span(Span const & src) {

	// std::cout << "Copy Span constructor called" << std::endl;

	*this = src;
	return ;
}

Span::~Span() {

	// std::cout << "Span destructor called" << std::endl;

	return ;
}

Span &	Span::operator=(Span const & rhs) {

	if (this != &rhs) {
		this->_intVector = rhs._intVector;
		this->_size = rhs._size;
	}
	return *this;
}

void	Span::addNumber(const int & value) {

	if (_intVector.size() < this->_size)
		_intVector.push_back(value);
	else
		throw ClassIsFull();
}

int		Span::longestSpan() const {

	if (this->_intVector.size() <= 1)
		throw NoSpanToFind();
	return (*std::max_element(_intVector.begin(), _intVector.end()) - *std::min_element(_intVector.begin(), _intVector.end()));
}

int		Span::shortestSpan() {

	int		span = INT_MAX;

	if (this->_intVector.size() <= 1)
		throw NoSpanToFind();
	else {
		std::vector<int>::const_iterator it;

		std::sort(_intVector.begin(), _intVector.end());
		for (it = _intVector.begin(); it != _intVector.end(); ++it) {
			if ((it + 1) != _intVector.end() && *(it + 1) - *it < span)
				span = *(it + 1) - *it;
		}
	}
	return span;
}
