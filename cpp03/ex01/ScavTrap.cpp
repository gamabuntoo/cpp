/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:48:27 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/14 14:48:27 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "CL4P-TP MODEL: ScavTrap created: unnamed" << std::endl;
}
ScavTrap::ScavTrap(std::string id) : ClapTrap(id)
{
	std::cout << "CL4P-TP MODEL: ScavTrap created: " << id << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &bot) : ClapTrap(bot._name)
{
    this->_health = bot._health;
    this->_ad = bot._ad;
    this->_energy = bot._energy;
	std::cout << "CL4P-TP MODEL: ScavTrap created: " << this->_name << std::endl;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "CL4P-TP MODEL: ScavTrap" << this->_name << "destroyed" << std::endl;
}
void	attack(const std::string target)
{
    if (this->_health == 0)
        std::cout << "ScavTrap " << this->_name << " can't attack because he's dead" << std::endl;
    else if (this->_energy >= 1)
    {
        this->_energy--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target <<
			", dealing "<< this->_ad << " points of damage!" << std::endl;
		if (this->_energy == 0)
			std::cout << "ScavTrap " << this->_name << " have no energy left after this attack" << std::endl;
    }
    else
        std::cout << "C̴C̶c̸L̸L̵.̴44P.̴T̵t̷T̷t̶ ̵ ̵p̷  MODEL: ScavTrap " << this->_name << ",̵  ̴ ̴ ̵ ̵ ̵ ̶n̴o̸ ̵e̴n̵e̷r̷g̷y̸ ̵l̵e̶f̴t̶  ̴c̵a̵n̵'̶t̷ ̵a̷t̸t̷a̵c̵k̵" << std::endl;

}
void	guardGate()
{
	

}