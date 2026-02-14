/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 23:52:32 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/13 23:52:32 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string id) : _health(10), _energy(10), _ad(0)
{
    this->_name = id;
    std::cout << "ClapTrap BOT N°" << id << " CREATED" << std::endl;
    return ;
}

ClapTrap::ClapTrap(void) : _health(10), _energy(10), _ad(0)
{
    this->_name = "";
    std::cout << "ClapTrap UNNAMED BOT CREATED " << "NAME HIM WITH GETTER" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &bot)
{
    this->_name = bot._name;
    this->_health = bot._health;
    this->_ad = bot._ad;
    this->_energy = bot._energy;
    std::cout << "ClapTrap BOT(Copy) N°" << bot._name << " CREATED" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &bot)
{
    this->_name = bot._name;
    this->_health = bot._health;
    this->_ad = bot._ad;
    this->_energy = bot._energy;
    std::cout << "Info " << bot._name << " SUCCESSFULLY COPIED (=)" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " WELL DESTROYED" << std::endl;   
}

//protected getter (not asked by the subject)
void    ClapTrap::set_name(std::string name)
{
    if (!this->_name.size())
    {
        this->_name = name;
        std::cout << "Named: " << name << std::endl;
    }
    else
        std::cout << "Already named: " << this->_name << std::endl;
    return ;
}

void	ClapTrap::print_hp(void)
{
	std::cout << "\tNow at:" << this->_health << "HP" << std::endl;
}

void    ClapTrap::attack(const std::string target)
{
    if (this->_health == 0)
        std::cout << "ClapTrap " << this->_name << " can't attack because he's dead" << std::endl;
    else if (this->_energy >= 1)
    {
        this->_energy--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target <<
			", dealing "<< this->_ad << " points of damage!" << std::endl;
		if (this->_energy == 0)
			std::cout << "ClapTrap " << this->_name << " have no energy left after this attack" << std::endl;
    }
    else
        std::cout << "C̴C̶c̸L̸L̵.̴a̸A̴a̶.̸P̶p̴P̸.̴T̵t̷T̷t̶ ̵R̸ ̵R̶r̶r̷ ̸a̴a̵a̵a̶a̷a̶a̴a̸a̴ ̷ ̵p̷ " << this->_name << ",̵  ̴ ̴ ̵ ̵ ̵ ̶n̴o̸ ̵e̴n̵e̷r̷g̷y̸ ̵l̵e̶f̴t̶  ̴c̵a̵n̵'̶t̷ ̵a̷t̸t̷a̵c̵k̵" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health == 0)
		std::cout << "ClapTrap " << this->_name << " can't be attacked, he's already dead" << std::endl;
	else if (this->_health >= 1)
	{
		if (this->_health <= amount)
			this->_health = 0;
		else
			this->_health -= amount;
		std::cout << "ClapTrap " << this->_name << " with " << this->_health <<"HP took " << amount << " damages!" << std::endl;
		print_hp();
	}
	if (this->_health == 0)
		std::cout << "C̵͍͗̇l̴̪͙̑ǎ̸̬̂p̷̤͂̔Ţ̴͚̇͂ŗ̸̓a̷̗͝p̸̞͍͋̋ ̸̥͌̓" << this->_name << "is now ͚d̶̡͔͊è̵̥̀a̷̙͂̄d̴͖̝͊͊ " << std::endl;

}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (amount == 0 || this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired for the moment" << std::endl;
	if (this->_health >= 1)
	{
		this->_health += amount;
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " regained " << amount << "HP" << std::endl;
		print_hp();
	}
	if (this->_health == 0)
		std::cout << "C̵͍͗̇l̴̪͙̑ǎ̸̬̂p̷̤͂̔Ţ̴͚̇͂ŗ̸̓a̷̗͝p̸̞͍͋̋ ̸̥͌̓" << this->_name << " is ͚d̶̡͔͊è̵̥̀a̷̙͂̄d̴͖̝͊͊  so he can't be repaired" << std::endl;
}