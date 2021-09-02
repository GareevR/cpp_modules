/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 23:28:07 by macservis         #+#    #+#             */
/*   Updated: 2021/09/01 23:47:05 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
#define CLASSES_HPP

class Base
{
public:
	virtual ~Base() {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif
