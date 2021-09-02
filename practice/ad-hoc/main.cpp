/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:03:34 by macservis         #+#    #+#             */
/*   Updated: 2021/08/23 14:09:01 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int main(void) {
	Sample	instance;

	instance.bar('a');
	instance.bar(10);
	instance.bar((float)3.1);
	instance.bar(instance);
}
