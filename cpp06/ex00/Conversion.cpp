/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:05:40 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/18 14:05:40 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

static std::string	itoa(int x)
{
	std::stringstream str;
	str << x;
	std::string r;
	str >> r;
	return r;
}

// static int parseFilter(std::string in)
// {
// 	if (in.size() == 0)
// 		return (std::cerr << "Input cannot be empty", 1)

// }


// static int	hasComma(std::string in)
// {
// 	for (int x = 0; in[x]; x++)
// 	{
// 		if (in[x] == ",")
// 			return (x);
// 	}
// 	return (0);
// }

static void	print_char(std::string type, std::string letter, int fl)
{
	std::cout << type << ": ";
	if (!fl)
	{
		std::cout << "'" << letter << "'" << std::endl;
		return ;
	}
	std::cout << letter << std::endl;
}

static char	char_converter(std::string in)
{
	char c;

	int	x;
	x = std::atol(in.c_str());
	if (x >= 32 && x <= 126)
	{
		c = x;
		std::string str;
		str.push_back(c);
		print_char("char", str, 0);
		return ;
	}
	else if (x > 0 && x < 32)
		print_char("char", "Non displayable", 1);
	else
		print_char("char", "impossible", 2);
}
	// if (hasComma(in))
	// {
		// int x = in.hasComma(); 
		// for (int v = x; in[v]; v++)
		// {
			// if (in[v] != "0")
			// {	print_char("Non displayable"); return ;	}
		// }
	// }

static int	int_converter(std::string in)
{
	long long int	x = 0;

	x = std::atoll(in.c_str());
	if (x < -2147483648 || x > 2147483647)
	{		print_char("int", "impossible", 1);		return ;	}
	print_char("int", itoa(x), 1);
	return ;
}

int	is_num_str(std::string in)
{
	int i = 0;
	for (int x = 0; in[x]; x++)
	{
		if (!std::isdigit(in[x]))
			return (-1);
		i = x;
	}
	if (i == in.size())
		return (1);
}

void	search_type(std::string in)
{
	if (in.size() == 1)
	{
		if (in[0] >= 32 && in[0] <= 126)
		{
			return (1);
		}
	}
	else if (!in.find(".") && is_num_str(in))
		return (2);
	else if ((in.size() > 3) && in[in.find(".")] + 1 < in.size())
	{
		int i = in.find(".");
		for (int p = i; in[p]; p++)
		{
			if (std::isdigit(in[p]))
				
		}
		if (in.find("f", i) > i+1)
		{

		}

	}
}

void	ScalarConverter::convert(std::string in)
{
	// if (parseFilter(in) == 1)
	int i;

	i = search_type(in);
	// switch (i)
	// {
	// 	case 1:
	// 	break;
	// 	case 2:
	// 	break;	
	// }
	char_converter(in);
	int_converter(in);
	float_converter(in);
	// double_converter(in);
}
