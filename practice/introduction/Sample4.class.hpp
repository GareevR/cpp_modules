/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample4.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:45:33 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 13:53:47 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE4_CLASS_HPP
# define SAMPLE4_CLASS_HPP

class Sample4
{

public:

	int		publicFoo;

	Sample4(void);
	~Sample4(void);

	void	publicBar(void) const;

private:

	int		_privateFoo;

	void	_privateBar(void) const;

};

#endif
