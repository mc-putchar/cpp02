/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:42:00 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 19:14:30 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {}

Point::Point( float const x, float const y ) : _x(x), _y(y) {}

Point::Point( Point const &src )
{
	*this = src;
}

Point &Point::operator=( Point const &src )
{
	if (this != &src) { ; }
	return (*this);
}

Point::~Point( void ) {}

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed	Point::getY( void ) const
{
	return (this->_y);
}

std::ostream &operator<<(std::ostream &out, Point const &value)
{
	out << "<" << value.getX() << ", " << value.getY() << ">";
	return (out);
}
