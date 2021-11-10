/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:15:42 by macservis         #+#    #+#             */
/*   Updated: 2021/09/10 15:01:43 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T*		_array;
	size_t	_size;
public:
	Array<T>(void) {

		// std::cout << "Default Array constructor called" << std::endl;
		this->_size = 0;
		this->_array = new T[0];
		return ;
	}
	Array<T>(unsigned int n) {

		// std::cout << "Parametric Array constructor called" << std::endl;
		this->_size = n;
		this->_array = new T[n]();
 		return ;
	}
	Array<T>(Array<T> const & src) {

		// std::cout << "Copy Array constructor called" << std::endl;

		this->_array = new T[0];
		*this = src;

		return ;
	}
	~Array<T>() {

		// std::cout << "Array destructor called" << std::endl;

		delete [] this->_array;
		return ;
	}

	Array<T>&	operator=(Array<T> const & rhs) {

		// std::cout << "Assignment operator called" << std::endl;

		if (this != &rhs) {
			delete [] this->_array;
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			for (size_t i = 0; i < this->_size; i++) {
				_array[i] = rhs._array[i];
			}
		}
		return *this;
	}

	T		operator[](size_t i) const {

		if (i >= this->_size)
			throw BadAccess();
		return _array[i];
	}

	T&		operator[](size_t i) {

		if (i >= this->_size)
			throw BadAccess();
		return _array[i];
	}

	class BadAccess: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Array index is out of range");
			}
	};

	size_t	size() const {
		return this->_size;
	}
};

#endif
