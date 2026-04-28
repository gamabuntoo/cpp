/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:24:31 by gule-bat          #+#    #+#             */
/*   Updated: 2026/04/29 00:39:43 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	Array<std::string> a(8);

	for (unsigned int i = 0; i < a.size(); i++)
			a[i] = "test";
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;

	// Array<int> p = Array<int>();

	// p = a;
	// for (unsigned int i = 0; i < 10; i++)	
		// std::cout << a[i] << std::endl;
	
	// Array<char *> arr(9);

	

	// for (unsigned int i = 0; i < 10; i++)	
	// 	std::cout << arr[i] << std::endl;

	// std::string s = "salut";
	// for (unsigned int i = 0; i < 10; i++)
		// std::cout << s[i] << std::endl;
	

	return 1;
}