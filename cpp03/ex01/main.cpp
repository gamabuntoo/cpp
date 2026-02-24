/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 23:52:16 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/13 23:52:16 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    // ClapTrap bot("rob");
    ScavTrap b("roger");
	ClapTrap a("serge");
    // ScavTrap serge(b);
    // ScavTrap m;
	
	b.attack("serge");
	b.attack("");
	b.takeDamage(5);
	b.takeDamage(8);
	b.beRepaired(3);
	b.guardGate();

	a.attack("roger");
	a.attack("personne");
	a.takeDamage(5);
	a.takeDamage(8);
	a.beRepaired(3);
	a.beRepaired(3);
	a.beRepaired(3);
	// m.set_name("roger robot");
	
	// serge.set_name("Michael droide");
	// serge.takeDamage(5);
	// m.set_name("Michael droide");
	return (1);
}