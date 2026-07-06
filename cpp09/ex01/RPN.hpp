/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 22:12:02 by gule-bat          #+#    #+#             */
/*   Updated: 2026/07/06 16:38:37 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <sstream>
#include <string>
#include <queue>

class	RPN_calculator
{
	private:
		std::string 		base_str;
		std::deque<char> 	stack;
	public:
		RPN_calculator();
		RPN_calculator(std::string in);
		RPN_calculator(const RPN_calculator &src);
		RPN_calculator &operator=(const RPN_calculator &src);
		~RPN_calculator();

		int	checkOperators_n_nb(std::string in);
		int	calc_rpn();
};