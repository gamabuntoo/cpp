/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:05:37 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/18 14:05:37 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	std::string str = argv[1];
	ScalarConverter::convert(str);
	// ScalarConverter sc;
	// (void)sc;
}