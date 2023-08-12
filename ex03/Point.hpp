/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:39:57 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 07:41:44 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();
		Point(Point const &copy);
		Point(float const x, float const y);
		Point &operator=(Point const &copy);
		~Point();

		Fixed	getX() const;
		Fixed	getY() const;
};

std::ostream &operator<<(std::ostream &out, Point const &value);

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point);
