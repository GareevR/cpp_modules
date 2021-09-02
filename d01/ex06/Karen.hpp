/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:01:52 by macservis         #+#    #+#             */
/*   Updated: 2021/08/18 20:46:51 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
private:
	typedef void (Karen:: * complainPtr)(void);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	printComplain(complainPtr funPtrArray[], std::string lvlArray[], std::string level);

public:
	Karen(/* args */);
	~Karen();

	void	complain(std::string level);
};


#endif
