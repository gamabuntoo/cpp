/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:47:07 by gule-bat          #+#    #+#             */
/*   Updated: 2026/05/04 20:41:54 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::vector<char> v;
	v.push_back('a');
	v.push_back('b');
	v.push_back('c');
	v.push_back('d');
	v.push_back('e');
	v.push_back(126);

	try
	{
		std::vector<char>::iterator c = easyfind(v, 126);
		if (c != v.end())
			std::cout << *c << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::vector<char>::iterator p = easyfind(v, 'e');
		if (p != v.end())
			std::cout << *p << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// if (p == v.end())
		// return (-1);
	return (1);
}