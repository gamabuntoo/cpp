/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:48:32 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/25 16:48:32 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "";
	std::cout << "WrongAnimal created\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal created:" << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	this->type = wrongAnimal.type;
	std::cout << "WrongAnimal copy created:" << this->type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed" << this->type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	if (this != &wrongAnimal)
		this->type = wrongAnimal.type;
	// std::cout "WrongAnimal" << WrongAnimal.type << "successfully copied" << std::endl;
	return (*this);
}

void WrongAnimal::setType(std::string type)
{
	if (this->type != "")
	{
		std::cout << "WrongAnimal type already set to " << this->type << std::endl;
		return ;
	}
	this->type = type;
	std::cout << "WrongAnimal type set to" << type << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	if (this->type == "")
	{
		std::cout << "WrongAnimal type is not set: NULL returned" << std::endl;
		return NULL;
	}
	std::string a = this->type;
	return (a);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << this->type << ": ▓⣭🞋⚟⢻☜⯩⯥⬬𝄡⚯⢞⛣⛯⣳" << std::endl;
}

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "wrong cat created\n";
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat.type)
{
	std::cout << "wrong cat animal copy created:" << this->type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << this->type << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
	if (this != &cat)
		this->type = cat.type;
	// std::cout "cat animal" << cat.type << "successfully copied" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	if (this->type != "WrongCat")
	{
		std::cout << this->type << ": \"woeM\" , \nthis wronganimal isn't completly a cat anymore." << std::endl;
		return ;
	}
	std::cout << this->type << ": Meow." << std::endl;
}