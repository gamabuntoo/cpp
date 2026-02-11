/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:21:35 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/07 18:21:35 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->type = type;
	// std::cout << "weapon type set : " << this->type << std::endl;
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

std::string &Weapon::getType(void)
{
	std::string &t = type;
	return (t);
}

Weapon::~Weapon(void)
{
	std::cout << "weapon broken" << std::endl;
}