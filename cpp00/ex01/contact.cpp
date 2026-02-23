/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:26:56 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/23 17:49:15 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::Init_empty(void)
{
	FirstName = "";
	LastName = "";
	Nickname = "";
	num = 0;
	Secret = "";
}

void	Contact::get_name()
{
	std::string str;
	std::cout << "Insert first name:\t";
	getline(std::cin, FirstName);
	while (FirstName == "")
	{
		std::cout << "enter non empty name :";
		getline(std::cin, FirstName);
	}
	std::cout << std::endl;
	std::cout << "Insert last name:\t";
	getline(std::cin, LastName);
	while (LastName == "")
	{
		std::cout << "enter non empty last name :";
		getline(std::cin, LastName);
	}
	std::cout << std::endl;
	std::cout << "Insert nickname:\t";
	getline(std::cin, Nickname);
	while (Nickname == "")
	{
		std::cout << "enter non empty nickname :";
		getline(std::cin, Nickname);
	}
	std::cout << std::endl;
	std::cout << "Insert number:\t\t";
	getline(std::cin, str);
	num = atoll(str.c_str());
	while (num == 0)
	{
		std::cout << "enter numbers only (0 not included):";
		getline(std::cin, str);
		num = atoll(str.c_str());
		if (num > 9999999999)
			num = 0;
	}
	std::cout << std::endl;
	std::cout << "Insert Darkest Secret:\t";
	getline(std::cin, Secret);
	while (Secret == "")
	{
		std::cout << "enter non empty secret :\n";
		getline(std::cin, Secret);
	}
	std::cout << std::endl;
}

void	Contact::read_name()
{
	if (FirstName != "" && LastName != "")
		std::cout << "\t |" << std::setw(10) << truncontact(FirstName) << "\t|" << std::setw(10) << truncontact(LastName) << "\t|" << std::setw(10) << truncontact(Nickname) << std::endl;
	else
		return ;
}

void	Contact::read_contact()
{
	std::cout << "\n. Name :\t" << FirstName << " " << LastName << std::endl;
	std::cout << ". Nickname:\t" << Nickname << std::endl;
	std::cout << ". Number :\t0" << num << std::endl;	
	std::cout << ". Secret :\t" << Secret << "\n" << std::endl;
}

std::string	truncontact(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}