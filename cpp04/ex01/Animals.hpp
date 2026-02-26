/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:44:58 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/25 14:44:58 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_H
# define ANIMALS_H

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &animal);
		virtual ~Animal();
		Animal &operator=(const Animal &animal);
		void setType(std::string type);
		std::string getType(void) const;
		virtual	void	makeSound()  const;
};

class Brain
{
	private:
		std::string *ideas;
	public:
		Brain();
		~Brain();
		Brain(Brain &brain);
		std::string	getIdea(unsigned int idx);
		void	setIdea(unsigned int idx, std::string s);
};

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);

		void	makeSound() const;
};

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);

		void	makeSound() const;
};

#endif