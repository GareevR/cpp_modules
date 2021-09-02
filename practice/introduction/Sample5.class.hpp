/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample5.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:14:33 by macservis         #+#    #+#             */
/*   Updated: 2021/07/15 14:15:52 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE5_CLASS_HPP
# define SAMPLE5_CLASS_HPP

class Sample5
{
public:

	Sample5(void);
	~Sample5(void);

	int		getFoo(void) const;
	void	setFoo(int v);

private:

	int		_foo;
};

#endif
