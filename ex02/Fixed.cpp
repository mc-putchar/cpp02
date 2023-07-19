/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:13:02 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 07:38:06 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_value(0) {}

Fixed::Fixed(int const n)
{
	this->_fixed_point_value = n << this->_fractional_bits;
}

Fixed::Fixed(float const n)
{
	this->_fixed_point_value = roundf(n * (1 << this->_fractional_bits));
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
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

bool	Fixed::operator>(const Fixed &copy) const
{
	return (this->_fixed_point_value > copy.getRawBits());
}

bool	Fixed::operator<(const Fixed &copy) const
{
	return (this->_fixed_point_value < copy.getRawBits());
}

bool	Fixed::operator>=(const Fixed &copy) const
{
	return (this->_fixed_point_value >= copy.getRawBits());
}

bool	Fixed::operator<=(const Fixed &copy) const
{
	return (this->_fixed_point_value <= copy.getRawBits());
}

bool	Fixed::operator==(const Fixed &copy) const
{
	return (this->_fixed_point_value == copy.getRawBits());
}

bool	Fixed::operator!=(const Fixed &copy) const
{
	return (this->_fixed_point_value != copy.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &copy) const
{
	return (Fixed(this->toFloat() + copy.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &copy) const
{
	return (Fixed(this->toFloat() - copy.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &copy) const
{
	return (Fixed(this->toFloat() * copy.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &copy) const
{
	return (Fixed(this->toFloat() / copy.toFloat()));
}

Fixed	&Fixed::operator++()
{
	this->_fixed_point_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->_fixed_point_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}
