/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:48:27 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/14 14:48:27 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->get_health() = 100;
    this->get_ad() = 100;
    this->get_energy() = 30;
	std::cout << "CL4P-TP MODEL: FragTrap created: unnamed" << std::endl;
}
FragTrap::FragTrap(std::string id) : ClapTrap(id)
{	
	this->get_health() = 100;
    this->get_ad() = 100;
    this->get_energy() = 30;
	std::cout << "CL4P-TP MODEL: FragTrap created: " << id << std::endl;
}

FragTrap::FragTrap(FragTrap &bot) : ClapTrap(bot.get_name())
{
    this->get_health() = bot.get_health();
    this->get_ad() = bot.get_ad();
    this->get_energy() = bot.get_energy();
	std::cout << "CL4P-TP MODEL: FragTrap created: " << this->get_name() << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "CL4P-TP MODEL: FragTrap " << this->get_name() << " destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &bot)
{

    this->get_name() = bot.get_name();
	this->get_health() = bot.get_health();
    this->get_ad() = bot.get_ad();
    this->get_energy() = bot.get_energy();
    std::cout << "Info " << bot.get_name() << " FragTrap SUCCESSFULLY COPIED (=)" << std::endl;
    return (*this);
}

void	FragTrap::attack(const std::string target)
{
    if (this->get_health() == 0)
        std::cout << "FragTrap " << this->get_name() << " can't attack because he's dead" << std::endl;
    else if (this->get_energy() >= 1)
    {
		unsigned int *x  = &this->get_energy();
		*x -= 1;
        std::cout << "FragTrap " << this->get_name() << " attacks " << target <<
			", dealing "<< this->get_ad() << " points of damage!" << std::endl;
		if (this->get_energy() == 0)
			std::cout << "FragTrap " << this->get_name() << " have no energy left after this attack" << std::endl;
    }
    else
        std::cout << "C̴C̶c̸L̸L̵.̴44P.̴T̵t̷T̷t̶ ̵ ̵p̷  MODEL: FragTrap " << this->get_name() << ",̵  ̴ ̴ ̵ ̵ ̵ ̶n̴o̸ ̵e̴n̵e̷r̷g̷y̸ ̵l̵e̶f̴t̶  ̴c̵a̵n̵'̶t̷ ̵a̷t̸t̷a̵c̵k̵" << std::endl;

}

void	FragTrap::highFiveGuys(void)
{
	if (this->get_health() == 0)
	{
		std::cout << "CL4P-TP: Model FragTrap: " << this->get_name() << " can't hive five rn..." << std::endl;
		return ;
	}
	std::cout << "CL4P-TP MODEL: FragTrap " << this->get_name() << "🤚" << std::endl;
	return ;
}