/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 21:39:51 by gule-bat          #+#    #+#             */
/*   Updated: 2026/09/02 01:43:50 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	PmergeMe::dispResults(int flag)
{
	if (res == -1)
		throw std::runtime_error("PmergeMe::dispResults(double,double): Error timer value");
	std::cout << "Time to process a range of " << size;
	if (flag == 1)
		std::cout << " elements with std::vector\t<int> :\t";  
	else
		std::cout << " elements with std::list\t\t<int> :\t";
	std::cout << std::fixed << std::setprecision(5)	<< res << " s" << std::endl;
}

PmergeMe::PmergeMe()
{
	
}

void 	PmergeMe::setContainer(std::list<long int>& l)
{
	this->list = l;
}

void	PmergeMe::setContainer(std::vector<long int>& l)
{
	this->vec = l;
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	this->vec = src.vec;
	this->list = src.list;
	this->size = src.size;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
	if (this != &src)
	{
		this->vec = src.vec;
		this->list = src.list;
		this->size = src.size;
	}
	return (*this);
}

void	PmergeMe::display(int x)
{
	if (x == 1)
	{
		for (std::vector<long int>::iterator x = vec.begin(); x != vec.end(); x++)
			std::cout << *x << " ";
	}
	else
	{
		for (std::list<long int>::iterator x = list.begin(); x != list.end(); x++)
			std::cout << *x << " ";		
	}
}

PmergeMe::~PmergeMe()
{
}

