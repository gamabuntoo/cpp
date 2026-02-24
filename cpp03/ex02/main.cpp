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
#include "FragTrap.hpp"

int main(void)
{
    // ClapTrap bot("rob");
    FragTrap b("roger");
    // ScavTrap serge(b);
    // ScavTrap m;
	
	b.highFiveGuys();
	b.attack("serge");
	b.attack("");
	b.takeDamage(15645);
	b.takeDamage(48);
	b.beRepaired(35);
	// m.set_name("roger robot");
	b.highFiveGuys();
	
	// serge.set_name("Michael droide");
	// serge.takeDamage(5);
	// m.set_name("Michael droide");
	return (1);
}