/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:39:06 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/25 14:39:06 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Animal::Animal(void)
{
	this->type = "";
	std::cout << "animal created\n";
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "animal created:" << type << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->type = animal.type;
	std::cout << "animal copy created:" << this->type << std::endl;
}

Animal::~Animal()
{
	std::cout << "animal destroyed" << this->type << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
		this->type = animal.type;
	// std::cout "animal" << animal.type << "successfully copied" << std::endl;
	return (*this);
}

void Animal::setType(std::string type)
{
	if (this->type != "")
	{
		std::cout << "Animal type already set to " << this->type << std::endl;
		return ;
	}
	this->type = type;
	std::cout << "Animal type set to" << type << std::endl;
}

std::string	Animal::getType(void) const
{
	if (this->type == "")
	{
		std::cout << "Animal type is not set: NULL returned" << std::endl;
		return NULL;
	}
	std::string a = this->type;
	return (a);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal " << this->type << ": " << std::endl;
}