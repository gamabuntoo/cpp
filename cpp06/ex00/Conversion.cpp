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

// static std::string	itoa(int x)
// {
// 	std::stringstream str;
// 	str << x;
// 	std::string r;
// 	str >> r;
// 	return r;
// }

// // static int parseFilter(std::string in)
// // {
// // 	if (in.size() == 0)
// // 		return (std::cerr << "Input cannot be empty", 1)

// // }


// // static int	hasComma(std::string in)
// // {
// // 	for (int x = 0; in[x]; x++)
// // 	{
// // 		if (in[x] == ",")
// // 			return (x);
// // 	}
// // 	return (0);
// // }

// static void	print_char(std::string type, std::string letter, int fl)
// {
// 	std::cout << type << ": ";
// 	if (!fl)
// 	{
// 		std::cout << "'" << letter << "'" << std::endl;
// 		return ;
// 	}
// 	std::cout << letter << std::endl;
// }

// static char	char_converter(std::string in)
// {
// 	char c;

// 	int	x;
// 	x = std::atol(in.c_str());
// 	if (x >= 32 && x <= 126)
// 	{
// 		c = x;
// 		std::string str;
// 		str.push_back(c);
// 		print_char("char", str, 0);
// 		return ;
// 	}
// 	else if (x > 0 && x < 32)
// 		print_char("char", "Non displayable", 1);
// 	else
// 		print_char("char", "impossible", 2);
// }
// 	// if (hasComma(in))
// 	// {
// 		// int x = in.hasComma(); 
// 		// for (int v = x; in[v]; v++)
// 		// {
// 			// if (in[v] != "0")
// 			// {	print_char("Non displayable"); return ;	}
// 		// }
// 	// }

// static int	int_converter(std::string in)
// {
// 	long long int	x = 0;

// 	x = std::atoll(in.c_str());
// 	if (x < -2147483648 || x > 2147483647)
// 	{		print_char("int", "impossible", 1);		return ;	}
// 	print_char("int", itoa(x), 1);
// 	return ;
// }

int	is_num_str(std::string in)
{
	int i = 0;
	for (int x = 0; in[x] != '\0'; x++)
	{
		if (!std::isdigit(in[x]))
			return (-1);
		i = x;
	}
	if (i == static_cast<int>(in.size()))
		return (1);
	return (0);
}

static int	search_type(std::string in)
{
	int z = static_cast<int>(in.find("."));
	std::cout << z << " " << is_num_str(in) << std::endl;
	
	std::cout << (static_cast<int>(in.find("."))) << " " << (static_cast<int>(in.size())) << std::endl;
	if (in.size() == 1)
	{
		if (in[0] >= 48 && in[0] <= 57)
			return (2);
		else if (in[0] >= 32 && in[0] <= 126)
			return (1);
	}
	else if (z == -1 && is_num_str(in) >= 0)
		return (2);
	else if ((static_cast<int>(in.size()) >= 3) && (static_cast<int>(in.find(".")) + 1 <= static_cast<int>(in.size())))
	{
		int x = 0;
		for (int t = 0; in[t]; t++)
		{
			if (!std::isdigit(in[t]))
				break;
			x = t;
		}
		int i = in.find(".")+1;
		if (!(x == i-2))
			return (0);
		for (int p = i; in[p]; p++)
		{
			if (!std::isdigit(in[p]))
				break;
			x = p;
		}
		std::cout << x << " " << static_cast<int>(in.size()) << std::endl;
		if (x == static_cast<int>(in.size())-1)
			return (4);
		if (static_cast<int>(in.find("f", i)) > x && static_cast<int>(in.size()) - 2 == x)
		{
			return (3);
		}

	}
	return (0);
}

void	ScalarConverter::convert(std::string in)
{
	// if (parseFilter(in) == 1)
	int i;

	i = search_type(in);
	switch (i)
	{
		case 1:
			std::cout << "char" << std::endl;
		break;
		case 2:
			std::cout << "int" << std::endl;
		break;	
		case 3:
			std::cout << "float" << std::endl;
		break;	
		case 4:
			std::cout << "double" << std::endl;
		break;
		default:
			std::cout << "aaaa" << std::endl;
	}
	// char_converter(in);
	// int_converter(in);
	// float_converter(in);
	// double_converter(in);
}
