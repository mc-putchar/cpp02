/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:16:00 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 17:19:29 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point	a(0, 0);
	Point	b(0, 5);
	Point	c(5, 0);
	Point	p(1, 1);

	if (bsp(a, b, c, p))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	return 0;
}
