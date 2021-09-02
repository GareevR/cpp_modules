/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample6.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:33:45 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 17:58:06 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE6_CLASS_HPP
# define SAMPLE6_CLASS_HPP

class Sample6
{
public:

	Sample6(int x);
	~Sample6(void);

	int		getFoo(void) const;
	int		compare(Sample6 *other) const;

private:

	int		_foo;
};

#endif
