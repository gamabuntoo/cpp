/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:16:58 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/07 18:16:58 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"
#include "humanB.hpp"

HumanB::HumanB(std::string name) : arm(NULL), name(name)
{
    // this->name = name;
}

void    HumanB::setWeapon(Weapon &w)
{
    arm = &w;
}

HumanB::~HumanB()
{
    return ;
}

void    HumanB::attack(void)
{
    if (!arm)
    {
        std::cout << name << "stays chill " << std::endl;
        return ;
    }
    std::cout << name << " attacks with their " << arm->getType() << std::endl;
}