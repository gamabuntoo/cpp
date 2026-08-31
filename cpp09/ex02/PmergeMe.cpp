/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 21:39:51 by gule-bat          #+#    #+#             */
/*   Updated: 2026/09/01 00:07:11 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// void PmergeMe::start

PmergeMe::PmergeMe()
{
	
}

PmergeMe::PmergeMe(std::vector<long int> vec, std::list<long int> list, int size)
{
	this->vec = vec;
	this->list = list;
	this->size = size;
	std::cout << "Before:\t";
	display();
	std::cout << "\n";
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

void	PmergeMe::display()
{
	for (std::vector<long int>::iterator x = vec.begin(); x != vec.end(); x++)
		std::cout << *x << " ";
	// std::cout << "\n";
}

PmergeMe::~PmergeMe()
{

	
}

int	Parser(std::vector<long int> &v, std::list<long int> &l, char **argv, int argc)
{
	for (int x = 0; x < argc; x++)
	{
		long int val = std::atol(argv[x]);
		if (val == 0 || val > 2147483647 || std::find(v.begin(), v.end(), val) != v.end())
		{
			std::cout << "PmergeMe::Parser:: Error input: " << argv[x] << std::endl;
			return (-1);
		}
		v.push_back(val);
		l.push_back(val);
	}
	return (v.size());
}