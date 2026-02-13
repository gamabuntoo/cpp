/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opertaror.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:14:35 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/13 19:14:35 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &os, Fixed const &f)
{
	os << f.toFloat();
	return os;
}

bool	Fixed::operator>(const Fixed &f)
{
	if (this->toFloat() > f.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed &f)
{
	if (this->toFloat() < f.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed &f)
{
	if (this->toFloat() >= f.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed &f)
{
	if (this->toFloat() <= f.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed &f)
{
	if (this->toFloat() == f.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed &f)
{
	if (this->toFloat() != f.toFloat())
		return (true);
	else
		return (false);
}

Fixed   Fixed::operator+(const Fixed &f)
{
    return (Fixed(this->_val + f._val));
}

Fixed   Fixed::operator-(const Fixed &f)
{
    return (Fixed(this->_val - f._val));
}

Fixed	Fixed::operator*(const Fixed &f)
{
    return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &f)
{
    return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed Fixed::operator++()
{
	this->_val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++this->_val;
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->_val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--this->_val;
	return (tmp);
}

const Fixed	&Fixed::min(Fixed const &f, Fixed const &f2)
{
	if (f.toFloat() <= f2.toFloat())
		return (f);
	else
		return (f2);
}

const Fixed	&Fixed::max(Fixed const  &f, Fixed const &f2)
{
	if (f.toFloat() >= f2.toFloat())
		return (f);
	else
		return (f2);
}

Fixed	&Fixed::min(Fixed &f, Fixed &f2)
{
	if (f.toFloat() <= f2.toFloat())
		return (f);
	else
		return (f2);
}

Fixed &Fixed::max(Fixed &f, Fixed &f2)
{
	if (f.toFloat() >= f2.toFloat())
		return (f);
	else
		return (f2);
}