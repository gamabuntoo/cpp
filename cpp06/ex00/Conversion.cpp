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
	std::string r;

	str << x;
	str >> r;
	return r;
}

static std::string	ftoa(float x, int pr)
{
	std::stringstream str;
	std::string r;

	str << std::fixed << std::setprecision(pr) << x << "f";
	str >> r;
	return r;
}

static std::string	dtoa(double x, int pr)
{
	std::stringstream str;
	std::string r;

	str << std::fixed << std::setprecision(pr) << x;
	str >> r;
	return r;
}

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

	if ((in[0] >= 32 && in[0] <= 126) && in.size() == 1) {
		c = in[0];
		return (print_char("char", in, 0), c);
	}
	x = std::atol(in.c_str());
	if (x >= 32 && x <= 126)
	{
		c = x;
		std::string str;
		str.push_back(c);
		return (print_char("char", str, 0), c);
	}
	else if (x > 0 && x < 32)
		print_char("char", "Non displayable", 1);
	else
		print_char("char", "impossible", 2);
	return 0;
}

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

static int	is_ok(std::string in)
{
	if (in == "nan" || in == "-inf" || in == "+inf")
		return (4);
	else if (in == "nanf" || in == "-inff" || in == "+inff")
		return (3);
	else
		return (0);
}

static int	search_type(std::string in)
{	
	int x = 0;

	if (in.empty())
		return (0);
	if (is_ok(in))
		return (is_ok(in));
	int z = static_cast<int>(in.find("."));
	if (in.size() == 1)
	{
		if (in[0] >= 48 && in[0] <= 57)
			return (2);
		else if (in[0] >= 32 && in[0] <= 126)
			return (1);
	}
	if (in.size() > 1 && (in[0] == '-' || in[0] == '+'))
	{ in.erase(0, 1); z = static_cast<int>(in.find(".")); }
	if (z <= 0 && is_num_str(in) >= 0)
		return (2);
	else if ((static_cast<int>(in.size()) >= 3) && z + 1 <= static_cast<int>(in.size()))
	{
		for (int t = 0; in[t]; t++)
		{
			if (!std::isdigit(in[t]))
				break;
			x = t;
		}
		int i = z+1;
		if (!(x == i-2))
			return (0);
		for (int p = i; in[p]; p++)
		{
			if (!std::isdigit(in[p]))
				break;
			x = p;
		}
		if (x == static_cast<int>(in.size())-1)
			return (4);
		if (static_cast<int>(in.find("f", i)) > x && static_cast<int>(in.size()) - 2 == x)
			return (3);
	}
	return (0);
}

static void char_mixer(std::string in)
{
	char c = char_converter(in);
	print_char("int", itoa(c), 1);
	print_char("float", ftoa(c, 1), 1);
	print_char("double", dtoa(c, 1), 1);
}

static void int_mixer(std::string in)
{
	long long int c = std::strtoll(in.c_str(), NULL, 10);

	if ((c + '0' >= 32) && c + '0' <= 126) 
		print_char("char", itoa(c + '0'), 0);
	else
		print_char("char", "Non displayable", 0);

	if ((c > RAND_MAX || c < -RAND_MAX))
		print_char("int", "impossible", 0);
	else
		print_char("int", itoa(c), 1);

	if (c > __FLT_MAX__ || c < -__FLT_MAX__)
		print_char("float", "impossible", 1);
	else
		print_char("float", ftoa(c, 1), 1);

	if (c > __DBL_MAX__ || c < -__DBL_MAX__)
		print_char("double", "impossible", 1);
	else
		print_char("double", dtoa(c, 1), 1);
}

static void float_mixer(std::string in)
{
	float c = std::strtof(in.c_str(), NULL);


	if ((c + '0' >= 32) && c + '0' <= 126) 
		print_char("char", itoa(c + '0'), 0);
	else
		print_char("char", "Non displayable", 0);

	if (c > RAND_MAX || c < -RAND_MAX || is_ok(in))
		print_char("int", "impossible", 0);
	else
		print_char("int", itoa(c), 1);

	int z = 0;
	int v = in.find(".");
	while (in[v] && in[v] != 'f')
	{ z++; v++; }
	v = z-1;
	if (c > __FLT_MAX__ || c < -__FLT_MAX__)
		print_char("float", "impossible", 1);
	else
		print_char("float", ftoa(c, v), 1);

	if (c > __DBL_MAX__ || c < -__DBL_MAX__)
		print_char("double", "impossible", 1);
	else
		print_char("double", dtoa(c, v), 1);
}

static void double_mixer(std::string in)
{
	double c = std::strtod(in.c_str(), NULL);

	if ((c + '0' >= 32) && c + '0' <= 126) 
		print_char("char", itoa(c + '0'), 0);
	else
		print_char("char", "Non displayable", 0);

	if (c > RAND_MAX || c < -RAND_MAX)
		print_char("int", "impossible", 0);
	else
		print_char("int", itoa(c), 1);

	int z = 0;
	int v = in.find(".");
	while (in[v] && in[v] != 'f')
	{ z++; v++; }
	v = z-1;
	if (c > __FLT_MAX__ || c < -__FLT_MAX__)
		print_char("float", "impossible", 1);
	else
		print_char("float", ftoa(c, v), 1);

	if (c > __DBL_MAX__ || c < -__DBL_MAX__)
		print_char("double", "impossible", 1);
	else
		print_char("double", dtoa(c, v), 1);
}

void	ScalarConverter::convert(std::string in)
{
	int i = 0;
	i = search_type(in);
	switch (i)
	{
		case 1:
			std::cout << "char" << std::endl;
			char_mixer(in);
		break;
		case 2:
			std::cout << "int" << std::endl;
			int_mixer(in);
		break;	
		case 3:
			std::cout << "float" << std::endl;
			float_mixer(in);
		break;	
		case 4:
			std::cout << "double" << std::endl;
			double_mixer(in);
		break;
		default:
			std::cout << "aaaa" << std::endl;
	}
}
