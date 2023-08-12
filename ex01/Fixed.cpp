/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:13:02 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/12 06:50:27 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_value = n << this->_fractional_bits;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_value = roundf(n * (1 << this->_fractional_bits));
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point_value = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixed_point_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixed_point_value / (1 << this->_fractional_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_fixed_point_value >> this->_fractional_bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}
