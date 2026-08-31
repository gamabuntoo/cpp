/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 21:39:45 by gule-bat          #+#    #+#             */
/*   Updated: 2026/09/01 00:32:23 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		std::cout << "PmergeMe::Requires 2 values or more to work (ex: ./PmergeMe 44 5 8 74 9 16 34 6 2)\n";
		return (1);
	}
	argv += 1;
	double res_v = 0;
	double res_l = 0;
	std::vector<long int>	v;
	std::list<long int>		l;
	int size = -1;

	std::cout << "\n";
	try
	{
		Chronometer c;
		size = Parser(v, l, argv, argc - 1);
		if (size == -1)
			return (std::cout << "PmergeMe:: Error in parsing please check your inputs\n", 1);
		PmergeMe p(v, l, size);
		res_v = c.ChronoEnd();
		res_l = res_v; //temp

		std::cout << "After :\t";
		p.display();
		std::cout << "\n\n";
		std::cout << "Time to process a range of " << size << 
			" elements with std::vector\t<int> :\t" << std::fixed << std::setprecision(5) 
			<< res_v << " s" << std::endl;
		std::cout << "Time to process a range of " << size << 
			" elements with std::list\t<int> :\t" << std::fixed << std::setprecision(5) 
			<< res_l << " s" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}