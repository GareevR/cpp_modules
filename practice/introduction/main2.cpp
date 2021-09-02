/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:10:14 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 18:58:30 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample8.class.hpp"

int		main()
{
	Sample8		instance;
	Sample8		*instancep = &instance;

	int			Sample8::*p = NULL;
	void		(Sample8::*f)(void) const;

	p = &Sample8::foo;

	std::cout << "Value of member foo :" << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo :" << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo :" << instance.foo << std::endl;

	f = &Sample8::bar;

	(instance.*f)();
	(instancep->*f)();

	return 0;
}
