/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 00:20:40 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/07 00:20:40 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "🪦🤙: EEeaaeeeaaaaaeeeuuuurgggg...AAAAAAAAAAAAAAAAAAhhhh ..." << this->name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " died again..." << std::endl;
}

void    Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}