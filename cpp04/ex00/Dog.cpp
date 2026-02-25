/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:31:28 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/25 15:31:28 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog created\n";
}

Dog::Dog(const Dog &dog) : Animal(dog.type)
{
	std::cout << "Dog animal copy created:" << this->type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << this->type << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this != &dog)
		this->type = dog.type;
	// std::cout << "Dog animal" << dog.type << "successfully copied" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	if (this->type != "Dog")
	{
		std::cout << this->type << ": \"fooW\" , \nthis animal isn't completly a Dog anymore." << std::endl;
		return ;
	}
	std::cout << this->type << ": Woof." << std::endl;
}