/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:40:37 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/13 17:11:58 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern()
{
	std::cout << "Intern created\n"; 

}

Intern::~Intern()
{
	std::cout << "Intern Fired\n";	
}

Intern &Intern::operator=(const Intern &intern)
{
	if (this != &intern)
		std::cout << "Interns cannot be copied even if they're not the same\n";
	std::cout << "Interns cannot be copied\n";
	return *this;
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	std::string tab[3] = {"robotomy request", "presidential pardon form", "shrubbery creation form"};
	
	AForm *ptr;
	
	std::cout << "\nAn intern is creating a form:\n";
	for (int x = 0; x < 3; x++)
	{
		if (form == tab[x])
		{
			switch (x)
			{
				case 0:
					ptr = new RobotomyRequestForm(target);
					break;
				case 1:
					ptr = new PresidentialPardonForm(target);
					break;
				case 2:
					ptr = new ShrubberyCreationForm(target);
					break;
				default:
					std::cout << "Idk what it is\n";
					return NULL;
			}
		}
	}
	return (ptr);
}