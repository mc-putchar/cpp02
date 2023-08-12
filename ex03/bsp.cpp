/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:44:08 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 18:28:17 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	edgeCheck(Point const &v1, Point const &v2, Point const &p)
{
	return (((v2.getY() - v1.getY()) * (p.getX() - v1.getX()) + \
		(v1.getX() - v2.getX()) * (p.getY() - v1.getY())));
}

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
	Fixed	check1 = edgeCheck(a, b, point);

	if (check1 == 0) return false;
	if (check1 > 0)
		return (edgeCheck(b, c, point) > 0 && \
				edgeCheck(c, a, point) > 0);
	else
	 	return (edgeCheck(b, c, point) < 0 && \
				edgeCheck(c, a, point) < 0);
}

// bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point)
// {
// 	Fixed	w1, w2;

// 	const Fixed& aca = (c.getY() - a.getY()) * a.getX();
// 	const Fixed& paca = (point.getY() - a.getY()) * (c.getX() - a.getX());
// 	const Fixed& pca = point.getX() * ( c.getY() - a.getY());
// 	const Fixed& bacayx = ((b.getY() - a.getY()) * (c.getX() - a.getX()));
// 	const Fixed& bacaxy = (b.getX() - a.getX()) * (c.getY() - a.getY());
// 	const Fixed& pay = point.getY() - a.getY();
// 	const Fixed& bay = b.getY() - a.getY();
// 	const Fixed& cay = c.getY() - a.getY();

// 	w1 = (aca + paca - pca) / (bacayx - bacaxy);
// 	w2 = (pay - w1 * bay) / cay;
// 	return (w1 >= 0 && w2 >= 0 && w1 + w2 <= 1);
// }
