/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:05:39 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/18 14:05:39 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
#define CONVERSION_H

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <limits>

class	ScalarConverter
{
	protected:
		ScalarConverter();
	public:
		static void	convert(std::string in);
		virtual ~ScalarConverter();
};

#endif