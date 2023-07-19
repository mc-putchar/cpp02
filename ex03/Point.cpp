/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:42:00 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 07:43:46 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {}

Point::Point( Point const & src )
{
	*this = src;
}

Point::Point( float const x, float const y ) : _x(x), _y(y) {}

Point::~Point( void ) {}

Fixed	Point::getX( void ) const
{
	return this->_x;
}

Fixed	Point::getY( void ) const
{
	return this->_y;
}
