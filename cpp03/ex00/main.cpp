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

int main(void)
{
    ClapTrap bot("rob");
    ClapTrap b;
	
	bot.attack("serge");	
	bot.attack("");
	bot.takeDamage(5);
	bot.takeDamage(8);
	bot.beRepaired(3);
	bot.set_name("roger robot");
	
	b.set_name("Michael droide");
	b.takeDamage(5);
	b.set_name("Michael droide");
	return (1);
}