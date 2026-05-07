/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:38:56 by gule-bat          #+#    #+#             */
/*   Updated: 2026/05/07 18:41:47 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int i) : s(i)
{
	std::cout << "span of size " << i << " created\n";
}

Span::~Span()
{
	std::cout << "Span destroyed\n";
}

Span &Span::operator=(const Span &span)
{
	if (this != &span)
	{
		this->sp = span.sp;
		this->s = span.s;
	}
	return (*this);
}

void	Span::addNumber(int number)
{
	std::cout << "current size: "<< sp.size() << " max size : " << s << std::endl;
	if (sp.size() <= static_cast<size_t>(s)+1)
		sp.push_back(number);
	else
		throw std::runtime_error("!!! cannot add more values to span object");
}

int		Span::shortestSpan()
{
	int j = 0;
	int res = -1;
	if (sp.size() == 1 || sp.empty())
		throw std::runtime_error("!!! not enough values to find the shortest span, 2 or more are needed");
	for (int i = 0; static_cast<size_t>(i) < sp.size(); i++)
	{
		j = 0;
		res = 0;
		while (static_cast<size_t>(j) < sp.size())
		{
			if (sp[i] > sp[j])
			{
				res = sp[i] - sp[j];
			}
			j++;
		}
	}
	return (res);
}

int		Span::longestSpan()
{
	int j = 0;
	int res = -1;
	// int tab[this->s*2];
	int id = 0;
	// int res2 = -1;
	if (sp.size() == 1 || sp.empty())
		throw std::runtime_error("!!! not enough values to find the longest span, 2 or more are needed");
	for (int i = 0; static_cast<size_t>(i) < sp.size(); i++)
	{
		j = 0;
		while (static_cast<size_t>(j) < sp.size())
		{
			if (sp[i] < sp[j])
			{
				id = sp[j] - sp[i];
				if (id > res)
					res = id;
			}
			j++;
		}
	}
	return (res);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (sp.size() + std::distance(begin, end) > s)
		throw std::runtime_error("!!! cannot add values to span class, max size: " + s);

	for (std::vector<int>::iterator a = begin; a != end; a++)
	{
		if (*a >= std::numeric_limits<int>::max() || *a <= std::numeric_limits<int>::min())
			throw std::runtime_error("!!! value higher than int max");
	}
	sp.insert(sp.end(), begin, end);
}

void Span::print()
{
	for (unsigned int i = 0; i < sp.size(); i++)
		std::cout << "index: " << i << " = \t" << sp[i] << std::endl;
	return ;
}