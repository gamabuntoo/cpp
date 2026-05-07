/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:38:58 by gule-bat          #+#    #+#             */
/*   Updated: 2026/05/07 18:28:30 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class	Span
{
	private:
		std::vector<int> sp;
		unsigned int s;
	public:
		Span(unsigned int i);
		~Span();
		Span &operator=(const Span &span);
		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void	print();
};