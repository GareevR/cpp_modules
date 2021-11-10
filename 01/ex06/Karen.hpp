/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:01:52 by macservis         #+#    #+#             */
/*   Updated: 2021/09/07 16:11:55 by macservis        ###   ########.fr       */
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
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
	void	_printComplain(complainPtr funPtrArray[], std::string lvlArray[], std::string level);

public:
	Karen(/* args */);
	~Karen();

	void	complain(std::string level);
};


#endif
