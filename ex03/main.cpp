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
	Point const	a(0.0f, 0.0f);
	Point const	b(25.0f, 0.0f);
	Point const	c(0.0f, 25.0f);
	float		x, y;

	std::cout << "Triangle is defined with A " << a << " B " << b << " C " \
				<< c << std::endl;
	std::cout << "Input point to check.\nX: ";
	std::cin >> x;
	std::cout << "Y: ";
	std::cin >> y;

	Point const point(x, y);

	if (bsp(a, b, c, point))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is NOT in the triangle" << std::endl;
	return 0;
}
