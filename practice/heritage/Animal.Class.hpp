/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 23:43:10 by macservis         #+#    #+#             */
/*   Updated: 2021/08/26 23:54:17 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Animal
{
	private:
		int		_numberOfLegs;
	public:
		Animal(void);
		Animal(Animal const & src);
		Animal& operator=(Animal const & src);
		~Animal(void);

		void	run(int distance);
};

class Cat: public Animal
{
	public:

}
