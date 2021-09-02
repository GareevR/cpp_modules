/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample3.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:06:14 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 13:45:24 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE3_CLASS_HPP
# define SAMPLE3_CLASS_HPP

class Sample3
{

public:

	float const pi;
	int			qd;

	Sample3(float const f);
	~Sample3(void);

	void	bar(void) const;

};

#endif
