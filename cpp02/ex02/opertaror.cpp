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

bool	&operator>(const Fixed &f)
{
	if (this.toFloat() > f.toFloat())
		return (TRUE);
	else
		return (FALSE);
}

bool	&operator<(const Fixed &f)
{
	if (this.toFloat() < f.toFloat())
		return (TRUE);
	else
		return (FALSE);
}

bool	&operator>=(const Fixed &f)
{
	if (this.toFloat() >= f.toFloat())
		return (TRUE);
	else
		return (FALSE);
}

bool	&operator<=(const Fixed &f)
{
	if (this.toFloat() <= f.toFloat())
		return (TRUE);
	else
		return (FALSE);
}

bool	&operator==(const Fixed &f)
{
	if (this.toFloat() == f.toFloat())
		return (TRUE);
	else
		return (FALSE);
}

bool	&operator!=(const Fixed &f)
{
	if (this.toFloat() != f.toFloat())
		return (TRUE);
	else
		return (FALSE);
}

Fixed   &operator+(const Fixed &f)
{
    return ((this._val + f._val));

}