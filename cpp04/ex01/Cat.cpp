/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:20:03 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/25 15:20:03 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->_brain = NULL;
	this->_brain = new Brain;
	if (!this->_brain)
		std::cout << "Unable to allocate brain in animal cat" << std::endl;
	std::cout << "cat created\n";
}

Cat::Cat(const Cat &cat) : Animal(cat.type)
{
	this->_brain = NULL;
	this->_brain = new Brain;
	if (!this->_brain)
		std::cout << "Unable to allocate brain in animal cat" << std::endl;
	std::cout << "cat animal copy created:" << this->type << std::endl;
}

Cat::~Cat()
{
	if (this->_brain != NULL)
		delete _brain;
	std::cout << "Cat destroyed" << this->type << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this != &cat)
		this->type = cat.type;
	// std::cout "cat animal" << cat.type << "successfully copied" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	if (this->type != "Cat")
	{
		std::cout << this->type << ": \"woeM\" , \nthis animal isn't completly a cat anymore." << std::endl;
		return ;
	}
	std::cout << this->type << ": Meow." << std::endl;
}