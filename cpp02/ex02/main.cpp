/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:20:11 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/22 18:20:11 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(b);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	if (a < b)
		std::cout << "a < b\n" << std::endl;
	else
		std::cout << "b > a" << std::endl;
	if (b > a)
		std::cout << "b > a\n" << std::endl;
	else
		std::cout << "a > b" << std::endl;

	if (a <= b)
		std::cout << "a <= b\n" << std::endl;
	else
		std::cout << "b >= a" << std::endl;
	if (b >= a)
		std::cout << "b >= a\n" << std::endl;
	else
		std::cout << "a >= b" << std::endl;

	if (b == c)
		std::cout << "b == c\n" << std::endl;
	else	
		std::cout << "b != c" << std::endl;
	if (a != c)
		std::cout << "a != c\n" << std::endl;
	else	
		std::cout << "a == c" << std::endl;
	b = b * Fixed(2);
	std::cout << "b(10.1016) * 2 = " << b << std::endl;
	b = b.toFloat() - a.toFloat();
	Fixed w = Fixed(b.toFloat() - a.toFloat());
	std::cout << "b(" << b.toFloat() << ") - a(" << a.toFloat() << ") = " << w.toFloat() << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	b = b / Fixed(2);
	std::cout << "b / 2 = " << b << std::endl;
	b = b.toFloat() + a.toFloat();
	w = Fixed(b.toFloat() - c.toFloat());
	std::cout << "b(" << b.toFloat() << ") + c(" << c.toFloat() << ") = " << w.toFloat() << std::endl;


	std::cout << w << std::endl;
	std::cout << --w << std::endl;
	std::cout << w << std::endl;
	std::cout << w-- << std::endl;
	std::cout << w << std::endl;
	return (0);
}

// int	main(void)
// {
// 	Fixed a;
// 	Fixed const b(10);
// 	Fixed const c(42.42f);
// 	Fixed const d(b);

// 	a = Fixed( -1234.4321f );
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;

// 	// std::cout << "\nval as int: " << std::endl;
// 	std::cout << "a is " << a.toInt() << std::endl;
// 	std::cout << "b is " << b.toInt() << std::endl;
// 	std::cout << "c is " << c.toInt() << std::endl;
// 	std::cout << "d is " << d.toInt() << std::endl;

// 	return (0);
// }

// int main( void )
// {
// 	Fixed a;
//	Fixed b( a );
// 	Fixed c;
// 	Fixed b(5.456f);
// 	Fixed g(4);

// 	c = a;
// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
// 	std::cout << g.toInt() << std::endl;
// 	std::cout << b.toFloat() << std::endl;
	// return (0);
// }