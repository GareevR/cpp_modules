/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:53:53 by macservis         #+#    #+#             */
/*   Updated: 2021/08/23 13:59:21 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP

class Sample
{
private:
	/* data */
public:
	Sample(/* args */);
	~Sample();

	void	bar(char const c) const;
	void	bar(int const n) const;
	void	bar(float const z) const;
	void	bar(Sample const &i) const;

};

#endif
