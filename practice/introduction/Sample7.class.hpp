/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample7.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:40:41 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 17:42:23 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE7_CLASS_HPP
# define SAMPLE7_CLASS_HPP

class Sample7
{
public:

	Sample7(void);
	~Sample7(void);

	static int	getNbInst(void);

private:

	static int	_nbInsts;
};

#endif
