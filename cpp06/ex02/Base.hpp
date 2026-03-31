/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:03:47 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/31 18:38:58 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <ctime>
#include <stdexcept>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		A();
};

class B : public Base
{
	public:
		B();
};

class C : public Base
{
	public:
		C();
};
Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif