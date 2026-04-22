/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 15:28:41 by gule-bat          #+#    #+#             */
/*   Updated: 2026/04/19 16:15:37 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename t>
void	stringgg(t &str)
{
	// str = "aaaa";
	std::cout << str << std::endl;
}

int main(void)
{
	std::string x[] = {"0", "1", "2", "3", "4"};
	char *s = NULL;

	iter(x, 4, stringgg<std::string>);
	iter(s, 4, stringgg<char>);
	// for (int w = 0; w < 4; w++)
		// std::cout << x[w] << std::endl;
	return (0);
}