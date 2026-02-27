/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:45:42 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/27 19:24:54 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Brain::Brain(void)
{
	this->ideas = new std::string[100];
	if (!this->ideas)
	{
		std::cout << "Unable to allocate brain\n";
		return ;
	}
}

Brain::Brain(Brain &brain)
{
	this->ideas = new std::string[100];
	if (!this->ideas)
	{
		std::cout << "Unable to allocate brain\n";
		return ;
	}
	for (unsigned int x = 0; x < 100; x++)
		this->ideas[x] = brain.ideas[x];
}

Brain::~Brain()
{
	// for (int x = 0; x < 100; x++)
	if (this->ideas != NULL)
		delete[] this->ideas;
}

Brain &Brain::operator=(const Brain &brain)
{
	if (this != &brain)
	{
		if (this->ideas != brain.ideas)
		{
			for (unsigned int x = 0; x < 100; x++)
				this->ideas[x] = brain.ideas[x];
		}
	}
	return (*this);
}

std::string	Brain::getIdea(unsigned int idx)
{
	if (idx > 99)
	{
		std::cout << "Brain cannot contain more than 100 informations" << std::endl;
		return "";
	}
	std::string s;
	s = this->ideas[idx];
	return (s);
}

void	Brain::setIdea(unsigned int idx, std::string s)
{
	if (idx > 99)
	{
		std::cout << "Brain cannot contain more than 100 informations" << std::endl;
		return ;
	}
	if (this->ideas[idx] != "")
	{
		std::cout << "idea" << idx << "already set as :" << this->ideas[idx] << std::endl;
		return ;	
	}
	std::string tmp = s;
	this->ideas[idx] = tmp;
	std::cout << "idea: " << s << "set at index:" << idx << std::endl;
}

