/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:38:55 by gule-bat          #+#    #+#             */
/*   Updated: 2026/05/07 18:35:20 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	
	try {
	Span sp = Span(1005);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::vector<int> a;;

	for (int i = 0; i < 100; i++)
		a.push_back(i);
	// int i = 0;
	// while (i < 1000)
		// sp.addNumber(i++);
	sp.addNumber(a.begin(), a.end());
	sp.addNumber(a.begin(), a.end());
	sp.addNumber(a.begin(), a.end());
	sp.addNumber(a.begin(), a.end());
	sp.addNumber(a.begin(), a.end());
	sp.addNumber(a.begin(), a.end());
	sp.addNumber(a.begin(), a.end());
	sp.addNumber(a.begin(), a.end());
	sp.addNumber(a.begin(), a.end());
	sp.addNumber(a.begin(), a.end());
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	sp.print();
	sp.addNumber(9);
	sp.addNumber(9);
	sp.addNumber(9);
	sp.addNumber(9);
	sp.addNumber(9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}