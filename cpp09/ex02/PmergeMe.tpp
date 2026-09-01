/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 01:06:44 by gule-bat          #+#    #+#             */
/*   Updated: 2026/09/02 01:47:49 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include "PmergeMe.hpp"
template <typename T>
int	Parser(T& type, const char **argv, int argc)
{
	for (int x = 0; x < argc; x++)
	{
		long int val = std::atol(argv[x]);
		if (val <= 0 || val > 2147483647 || std::find(type.begin(), type.end(), val) != type.end())
		{
			throw std::runtime_error("PmergeMe::Parser:: Error input: "  + std::string(argv[x]));
			return (-1);
		}
		type.push_back(val);
		// l.push_back(val);
	}
	return (type.size());
}

template <typename T>
void	PmergeMe::insertVal(T& cont, int val)
{
	typename T::iterator t = cont.begin();
	for (; t != cont.end() && *t < val; ++t);
	cont.insert(t, val);
}

template <typename T>
void	PmergeMe::jacobsthal(int size, T& cont)
{
	T seq;

	if (size <= 0)
		return ;
	seq.push_back(0);
	int p = 1;
	int c = 3;
	while (p < size)
	{
		int x = std::min(c, size);
		for (int l = x - 1; l >= p; --l)
			seq.push_back(l); // create sequence backwards from result of x;
		int tmp = c + (2 * p);
		p = c;
		c = tmp;
	}
	cont = seq;
}

template <typename T>
void	PmergeMe::sortCont(T& cont)
{
	typename T::iterator x = cont.begin();
	T small;
	T big;
	T stock;
	int left = -1;
	int i = 0;
	if (cont.size() <= 1)
		return ;
	while (x != cont.end())
	{
		int f = *x;
		++x;		i++;
		if (x == cont.end())
		{
			left = f;
			stock.push_back(f);
			break;
		}
		int s = *x;
		++x;		i++;
		if (f > s)
			std::swap(f, s);
		small.push_back(f); // less loop operations bcs we already know which value is
		big.push_back(s);	// small or little by doing this (f > s)	
		stock.push_back(f);
		stock.push_back(s);
	}


///////////////////////////////DEBUG/////////////////////////////////
	// std::cout << "Pairs:\t";
	// for (typename T::iterator t = stock.begin(); t != stock.end(); ++t)
	// 	std::cout << *t << " " ;
	// std::cout << std::endl;
	// // small / big
	// std::cout << "Small:\t";
	// for (typename T::iterator t = small.begin(); t != small.end(); ++t)
	// 	std::cout << *t << " " ;
	// std::cout << std::endl;
	// std::cout << "Big:\t";
	// for (typename T::iterator t = big.begin(); t != big.end(); ++t)
	// 	std::cout << *t << " " ;
	// std::cout << std::endl;
	// if (left != -1)
	// 	std::cout << "value left: " << left << std::endl;
//////////////////////////////DEBUG/////////////////////////////////

	sortCont(big);
	T jacob;
	
	jacobsthal(static_cast<int>(small.size()), jacob);
	if (jacob.size() == 0)
		throw std::runtime_error("PmergeMe::Error in jacobsthal algo\n");

	// std::cout << "Order:\t";
	// for (typename T::iterator t = jacob.begin(); t != jacob.end(); ++t)
		// std::cout << *t << " " ;
	// std::cout << std::endl;

	for (typename T::iterator t = jacob.begin(); t != jacob.end(); ++t)
	{
		typename T::iterator tmp = small.begin();
		std::advance(tmp, *t); // 	go to small[order[t]] position 
		insertVal(big, *tmp); //	and insert the value at it
	}
	if (left != -1)
		insertVal(big, left);
	cont = big;
	return ;
}

template <typename T>
PmergeMe::PmergeMe(T& type, const char **argv, int size, bool info)
{
	Chronometer time;
	// Chronometer time_list;

	this->res = -1;
	this->size = Parser(type, argv, size); // creates vec and list with argc argv and returns the size, error == -1
	if (this->size == -1 || this->size == 0 || type.size() == 0 || this->size > 3000)
	{
		throw std::runtime_error("PmergeMe:: Error in parsing please check your inputs\n");
		return ;
	}
	if (info != 0)
	{
		std::cout << "Before:\t";
		setContainer(type);
		display(info);
		std::cout << "\n";
	}
	// std::cout << "-------------\nDEBUG\t" << "Vector:\n\n";
	sortCont(type); // sorting container 1/ need to fix chrono, one for each container
	setContainer(type);
	this->res = time.ChronoEnd();

	if (info != 0)
	{
		std::cout << "After :\t";
		display(info);
		std::cout << "\n\n";
	}
	// std::cout << "-------------\nDEBUG\t" << "List:\n\n";
	// sortCont(this->list); // sorting container 1/ need to fix chrono, one for each container
	// std::cout << "-------------\n" << std::endl;
}