/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:14:06 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/22 18:14:06 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_H
#  define FIXED_H

#include <iostream>
#include <sstream>
#include <cmath>

class   Fixed
{
    private:
        int                 _val;
        static const int    _fract = 8;
    public:
        Fixed(void);
        Fixed(const int f);
        Fixed(const float f);
        Fixed(const Fixed &f);
        Fixed   &operator=(const Fixed &f);
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};
	
std::ostream &operator<<(std::ostream &os, Fixed const &f);

#endif