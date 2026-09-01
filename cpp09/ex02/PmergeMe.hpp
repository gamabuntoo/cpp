/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 21:39:52 by gule-bat          #+#    #+#             */
/*   Updated: 2026/09/02 01:44:17 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <list>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <sys/time.h>
#include <iomanip>

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
		}	// remettre en us
};

class	PmergeMe
{
	private:
		std::vector<long int> 	vec;
		std::list<long int>		list;
		int					size;
		double				res;
	public:
		PmergeMe();
		template <typename T>
		PmergeMe(T& type, const char **argv, int size, bool info);
		PmergeMe(const PmergeMe &src);
		PmergeMe 	&operator=(const PmergeMe &src);
		~PmergeMe();
		void		display(int info);
		void		dispResults(int flag);


		template <typename T>
		void 	sortCont(T& cont);
		template <typename T>
		void	insertVal(T& cont, int val);
		template <typename T>
		void	jacobsthal(int size, T& cont);
		void	setContainer(std::list<long int>& l);
		void	setContainer(std::vector<long int>& l);
};

template <typename T> int	Parser(T& type, const char **argv, int argc);

#include "PmergeMe.tpp"