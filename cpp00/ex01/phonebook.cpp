/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:26:48 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/23 17:31:37 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	int i = 0;
	while (i < 9)
		Infos[i++].Init_empty();
}

Phonebook::~Phonebook(void)
{
	return ;
}

int	Phonebook::add_contact(int *s)
{
	std::string str;
	if (size > 8)
		return (0);
	if (*s == 8)
	{
		std::cout << "Do you want to overwrite contact 0 ?\t Y/N" << std::endl;
		std::getline(std::cin, str);
		if (str == "Y")
			*s = 0;
		else
			return (0);
	}
	if (size <= 9)
	{
		Infos[*s].get_name();
		if (size < 8)
			size += 1;
		// if (str == "Y")
			// return (0);	
		return (1);
	}
	return (0);
}

void	Phonebook::search_contact()
{
	int	i;
	std::string str;
	i = 0;
	std::cout << "\n[" << std::setw(10) << "Contacts" <<  "\t" << std::setw(10) << "-|First Name" << "\t" << std::setw(10) << "|Last Name" << "\t" << std::setw(10) << "|Nickname]\n" << std::endl;
	// std::cout << "________________________________________________________________________" << std::endl;
	std::cout << "----------------------------------------------------------" << std::endl;
	while (i < size)
	{
		std::cout << "- " << "[" << i << "]\t";
		Infos[i].read_name();
		i++;
	}
	std::cout << "\n___________________" << std::endl;
	std::cout << "Type the n° of the contact that you want to read:\n" << std::endl;
	std::getline(std::cin, str);
	std::cout << "___________________" << std::endl;
	if (str.empty())
		return ;
	if (std::atoll(str.c_str()) < size)
		Infos[std::atoll(str.c_str())].read_contact();
	else
		std::cout << "\ninvalid nb\n";
	return ;
}
