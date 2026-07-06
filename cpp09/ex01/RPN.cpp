/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 22:12:00 by gule-bat          #+#    #+#             */
/*   Updated: 2026/07/06 16:38:30 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	is_op(char c)
{
	if (c == '/')
		return (1);
	else if (c == '+') 
		return (2);
	else if (c == '-')
		return (3);
	else if (c == '*')
		return (4);
	return (0);
}


int	RPN_calculator::calc_rpn()
{
	/*static	*/std::deque<char> q = std::deque<char>(this->stack);
	std::deque<int>					res;

	while (q.size())
	{
		// std::cout << q.front() << std::endl;
		if (std::isdigit(q.front()))
		{
			res.push_back(q.front() - '0');
			// res.push(q.front() - '0');
			q.pop_front();
		}
		else if (is_op(q.front()) && res.size() > 1)
		{
			int tmp1 = res.back();
			res.pop_back();
			int tmp2 = res.back();
			res.pop_back();
			switch (is_op(q.front()))
			{
				case 1:
					res.push_back(tmp2 / tmp1);
					break;
				case 2:
					res.push_back(tmp2 + tmp1);
					break;
				case 3:
					res.push_back(tmp2 - tmp1);
					break;
				case 4:
					res.push_back(tmp2 * tmp1);
					break;
				default:
					throw std::runtime_error("error operator");
					break;
			}
			q.pop_front();
			std::cout << tmp2 << " " << tmp1 << " " << res.back() << std::endl;
		}
		else
			throw std::runtime_error("error format");
	}
	if (res.size() == 1)
		std::cout << res.at(0) << std::endl;
	else
		std::cout << "Values left in the stack, add more operators." << std::endl;
	return (1);
}

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
			stack.push_back(in[i]);
		}
		else if (is_op(in[i]))
		{
			stack.push_back(in[i]);
			op++;
		}
	}
	if ((s + nb + op == in.size() && in.size() > 2) && nb > op)
		std::cout << "line okay: " << in << std::endl;
	else if (op >= nb)
		throw std::runtime_error("Error string: the operator amount is superior or equal than the amount of digits: " + in);
	else
		throw std::runtime_error("Error string: unknown values given: " + in);

	std::deque<char> q(this->stack);
	while (!q.empty())
	{
		std::cout << q.front() << " ";
		q.pop_front();
	}
	std::cout << std::endl;
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