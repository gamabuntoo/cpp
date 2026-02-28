/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:35:45 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/25 15:35:45 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Wrong.hpp"

std::string	itoa(int x)
{
	std::stringstream str;
	str << x;
	std::string r;
	str >> r;
	return r;
}

int main(void)
{
	// Animal **ar = new Animal*[101];
	// ar[0] = new Animal;
	// ar[0][0]->setType("Dog");
	// std::cout << ar[0]->getType() << std::endl;
	// delete[] ar; // impossible d'instancier la classe car virtuelle
	
	
	
	// Dog a = Dog();
	// Cat b = Cat();
	// for(unsigned int x = 0; x < 103; x++)
	// {
	// 	a.setIdea(x, "Dog idea n°" + itoa(x));
	// 	b.setIdea(x, "Cat idea n°" + itoa(x));
	// }
	// for(unsigned int x = 0; x < 103; x++)
	// {
	// 	a.makeSound();
	// 	std::cout << a.getIdea(x) << std::endl;
	// 	b.makeSound();
	// 	std::cout << b.getIdea(x) << std::endl;
	// }		

	// std::cout << "created and destroyed !\n" << std::endl;
	// Animal* j = new Dog();
	// Animal* i = new Cat();
	// const WrongAnimal* m = new WrongCat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// j->setType("taC");
	// i->setType("didier");
	// i->makeSound();
	// j->makeSound();
	// m->makeSound();
	// meta->makeSound();
	// delete(meta);
	// delete(j);
	// delete(i);
	// delete(m);
	// return 0;
}