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

ScavTrap::ScavTrap(ScavTrap &bot) : ClapTrap(bot.get_name())
{
    this->get_health() = bot.get_health();
    this->get_ad() = bot.get_ad();
    this->get_energy() = bot.get_energy();
	std::cout << "CL4P-TP MODEL: ScavTrap created: " << this->get_name() << std::endl;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "CL4P-TP MODEL: ScavTrap " << this->get_name() << " destroyed" << std::endl;
}
void	ScavTrap::attack(const std::string target)
{
    if (this->get_health() == 0)
        std::cout << "ScavTrap " << this->get_name() << " can't attack because he's dead" << std::endl;
    else if (this->get_energy() >= 1)
    {
		unsigned int *x  = &this->get_energy();
		*x -= 1;
        std::cout << "ScavTrap " << this->get_name() << " attacks " << target <<
			", dealing "<< this->get_ad() << " points of damage!" << std::endl;
		if (this->get_energy() == 0)
			std::cout << "ScavTrap " << this->get_name() << " have no energy left after this attack" << std::endl;
    }
    else
        std::cout << "C̴C̶c̸L̸L̵.̴44P.̴T̵t̷T̷t̶ ̵ ̵p̷  MODEL: ScavTrap " << this->get_name() << ",̵  ̴ ̴ ̵ ̵ ̵ ̶n̴o̸ ̵e̴n̵e̷r̷g̷y̸ ̵l̵e̶f̴t̶  ̴c̵a̵n̵'̶t̷ ̵a̷t̸t̷a̵c̵k̵" << std::endl;

}
void	ScavTrap::guardGate()
{
	static int	gate = 0;

	gate++;
	if (gate > 1)
	{
		std::cout << "CL4P-TP MODEL: ScavTrap " << this->get_name() << " disabled his gate keeper mode" << std::endl;
		gate = 0;
		return ;
	}
	std::cout << "CL4P-TP MODEL: ScavTrap " << this->get_name() << " is now in gate keeper mode" << std::endl;
	return ;
}