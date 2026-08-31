/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 21:39:52 by gule-bat          #+#    #+#             */
/*   Updated: 2026/09/01 00:42:40 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <sys/time.h>

class Chronometer
{
	private:
		timeval begin;
		timeval end;
		double 	res;
	public:
		Chronometer()
		{
			gettimeofday(&begin, 0);
			res = 0;
		}
		~Chronometer()
		{
			
		}
		double ChronoEnd()
		{
			gettimeofday(&end, 0);
			// double res = (static_cast<double>(
				// (end.tv_sec - begin.tv_sec) * 1000000.0) + static_cast<double>(end.tv_usec - begin.tv_usec));
			double b = (end.tv_sec - begin.tv_sec) * 1e6;
			// b += end.tv_usec - begin.tv_usec;
			b = (b + (end.tv_usec - begin.tv_usec)) * 1e-6;
			// double res = static_cast<double>(1000000 * end.tv_sec + end.tv_usec) - static_cast<double>(1000000 * begin.tv_sec + begin.tv_usec);
			return (b);
		}
};

class	PmergeMe
{
	private:
		std::vector<long int> 	vec;
		std::list<long int>		list;
		int					size;
	public:
		PmergeMe();
		PmergeMe(std::vector<long int> vec, std::list<long int> list, int size);
		PmergeMe(const PmergeMe &src);
		PmergeMe 	&operator=(const PmergeMe &src);
		~PmergeMe();
		void		display();
		// template <typename T> void sort(const T& ptr);
};

int	Parser(std::vector<long int> &v, std::list<long int> &l, char **argv, int argc);
