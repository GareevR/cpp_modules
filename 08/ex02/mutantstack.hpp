/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:33:49 by macservis         #+#    #+#             */
/*   Updated: 2021/09/10 18:10:55 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
private:
	/* data */
public:
	MutantStack(/* args */) {} ;
	~MutantStack() {};
	MutantStack(MutantStack const & src) {
		*this = src;
	};
	MutantStack&	operator=(MutantStack const & rhs) {
		(void)rhs;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin() {
		return (std::stack<T>::c.begin());
	}
	iterator	end() {
		return (std::stack<T>::c.end());
	}
};

#endif
