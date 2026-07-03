/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 22:12:00 by gule-bat          #+#    #+#             */
/*   Updated: 2026/07/03 15:08:51 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	RPN_calculator::checkOperators_n_nb(std::string in)
{
	long unsigned int nb = 0;
	long unsigned int op = 0;
	long unsigned int  s = 0;

	for (long unsigned int i = 0; i < in.size(); i++)
	{
		if (in[i] == ' ')
			s++;
		if (std::isdigit(in[i]))
		{
			nb++;
			stack.push(in[i]);
		}
		else if (in[i] == '/' || in[i] == '+' || in[i] == '-' || in[i] == '*')
		{
			stack.push(in[i]);
			op++;
		}
	}
	if ((s + nb + op == in.size() && in.size() > 2) && nb > op)
		std::cout << "line okay: " << in << std::endl;
	else if (op > nb)
		throw std::runtime_error("Error string, there is more operators than numbers: " + in);
	else
		throw std::runtime_error("Error string unknown values given: " + in);

	std::queue<char> q(this->stack);
	while (!q.empty())
	{
		std::cout << q.front() << " ";
		q.pop();
	}
	return (1);	
}

RPN_calculator::RPN_calculator() : base_str(" ")
{

}


RPN_calculator::RPN_calculator(std::string in) : base_str(in)
{
	if (!checkOperators_n_nb(in))
		throw std::runtime_error("Error in input string");
}

RPN_calculator::RPN_calculator(const RPN_calculator &src)
{
	this->base_str = src.base_str;
	this->stack = src.stack;
}

RPN_calculator &RPN_calculator::operator=(const RPN_calculator &src)
{
	if (this != &src)
	{
		this->stack = src.stack;
	}
	return ((*this));
}

RPN_calculator::~RPN_calculator()
{

	
}