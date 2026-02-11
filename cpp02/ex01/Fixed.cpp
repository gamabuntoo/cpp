/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:22:00 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/22 18:22:00 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// static const int    Fixed::_fract = 8;

Fixed::Fixed(const int i)
{
	std::cout << "Int Constructor Called" << std::endl;
	this->_val = i * (this->_fract * 32);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float Constructor Called" << std::endl;
	this->_val = (int)f * (this->_fract * 32);
}

Fixed::Fixed(void): _val(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &f)
{
    if (this != &f)
        this->_val = f.getRawBits();
    return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member funct called" << std::endl;
	return (this->_val);
}

void    Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}

int		Fixed::toInt(void) const
{
	int x = this->_val / (this->_fract * 32);

	std::stringstream st;
	std::string str;
	st << x;
	st>>str;
	std::cout << "toInt called, int is: " << str << std::endl;
	return (x);
}

float	Fixed::toFloat(void) const
{
	float x;
	
	x = ((this->_val) / (float)(1 << this->_fract));
	// y = static_cast<float>(this->_val) / (1 << this->_fract*2);
	// x += y/10;
	std::stringstream st;
	std::string str;
	st << x;
	st>>str;
	std::cout << "toFloat called, float is: " << str << std::endl;
	return (x);
}