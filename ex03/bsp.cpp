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

bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	w1, w2;
	const Fixed& aca = (c.getY() - a.getY()) * a.getX();
	const Fixed& paca = (p.getY() - a.getY()) * (c.getX() - a.getX());
	const Fixed& pca = p.getX() * ( c.getY() - a.getY());
	const Fixed& bacayx = ((b.getY() - a.getY()) * (c.getX() - a.getX()));
	const Fixed& bacaxy = (b.getX() - a.getX()) * (c.getY() - a.getY());
	const Fixed& pay = p.getY() - a.getY();
	const Fixed& bay = b.getY() - a.getY();
	const Fixed& cay = c.getY() - a.getY();

	w1 = (aca + paca - pca) / (bacayx - bacaxy);
	w2 = (pay - w1 * bay) / cay;
	return (w1 >= 0 && w2 >= 0 && w1 + w2 <= 1);
}
