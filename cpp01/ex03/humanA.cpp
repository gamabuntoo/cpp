/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:17:00 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/07 18:17:00 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"
#include "humanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : arm(w), name(name)
{
    // this->name = name;
    // arm = w;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << arm.getType() << std::endl;
}