/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:03:46 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/31 18:40:48 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	
}

A::A()
{
}

B::B()
{
}

C::C()
{}

Base *generate(void)
{
	srand(std::time(0));
	int r = std::rand();
	A *a = new A();
	B *b = new B();
	C *c = new C();
	if (r % 3)
		return (delete b, delete c, a);
	else if (r % 6)
		return (delete a, delete c, b);
	else
		return (delete a, delete b, c);
}

void identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "object type is A" << std::endl;
	else if (b)
		std::cout << "object type is B" << std::endl;
	else if (c)
		std::cout << "object type is C" << std::endl;
	return ;
}

void identify(Base &p)
{
	try
	{
		identify(&p);
	}
	catch (const std::exception& e)
	{
		std::cerr << "exception catched" << e.what() << std::endl;
	}
	return ;
}
