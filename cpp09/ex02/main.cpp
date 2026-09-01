/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 21:39:45 by gule-bat          #+#    #+#             */
/*   Updated: 2026/09/02 01:39:56 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		std::cout << "PmergeMe::Requires 2 values or more to work (ex: ./PmergeMe 44 5 8 74 9 16 34 6 2)\n";
		return (1);
	}
	argv += 1;
	argc -= 1;
	const char **ar = (const char **)argv;
	std::cout << "\n";
	try
	{
		
		std::list<long int> l;
		PmergeMe pl(l, ar, argc, 0);
		
		std::vector<long int> v;
		PmergeMe pv(v, ar, argc, 1);
		
		pl.dispResults(0);
		pv.dispResults(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}