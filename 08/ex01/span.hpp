/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:39:42 by macservis         #+#    #+#             */
/*   Updated: 2021/09/06 21:13:18 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
private:
	std::vector<int>	_intVector;
	unsigned int		_size;
public:
	Span(void);
	Span(unsigned int N);
	Span(Span const & src);

	Span&	operator=(Span const & rhs);

	~Span();

	class ClassIsFull: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Can't store any more integers in class");
			}
	};

	class NoSpanToFind: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("No span to find, not enough integers available");
			}
	};

	void	addNumber(int const & value);

	template <typename Iterator>
	void	addNumber(Iterator begin, Iterator end) {
		if (_intVector.size() + std::distance(begin, end) > this->_size)
			throw ClassIsFull();
		while (begin != end)
			addNumber(*begin++);
	};

	int		shortestSpan();
	int		longestSpan() const;
};

#endif
