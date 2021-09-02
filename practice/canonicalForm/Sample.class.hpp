/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:22:43 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 21:57:24 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
private:
	int		_foo;
public:
	Sample(void);   // canon
	Sample(int const n);
	Sample(Sample const & src);    // canon
	~Sample(void);    // canon

	Sample &	operator=(Sample const & rhs);    // canon

	int			getFoo(void) const;
};

std::ostream & operator<<(std::ostream & o, Sample const & i);

#endif
