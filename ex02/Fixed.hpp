/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:09:59 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 07:33:20 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixed_point_value;
		static int const	_fractional_bits = 8;
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);
		~Fixed();
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		bool	operator>(Fixed const &copy) const;
		bool	operator<(Fixed const &copy) const;
		bool	operator>=(Fixed const &copy) const;
		bool	operator<=(Fixed const &copy) const;
		bool	operator==(Fixed const &copy) const;
		bool	operator!=(Fixed const &copy) const;

		Fixed	operator+(Fixed const &copy) const;
		Fixed	operator-(Fixed const &copy) const;
		Fixed	operator*(Fixed const &copy) const;
		Fixed	operator/(Fixed const &copy) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	const &min(Fixed const &a, Fixed const &b);
		static Fixed	const &max(Fixed const &a, Fixed const &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
