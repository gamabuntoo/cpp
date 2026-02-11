/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:46:24 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/20 13:46:24 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(void)
{
    std::cout << "Bonjour à vous\n" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Au revoir merci à vous\n" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "DEBUG:" << std::endl;
    std::cout << "J'ai appris ça sur internet.\n" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "INFO:" << std::endl;
    std::cout << "Moi j'ahbite du 91 là, et donc euuhh.. . \nJe suis fier de consommer pour la première fois un burger king en France,\ndonc au moins un menu whooper pour commencer.\n" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "WARNING:" << std::endl;
    std::cout << "oui beaucoup on a attendu 40 minutes quand même, avec le temps d'attendre dehors et là ..!\nJe croyais que ça allait être plus grand, c'est dommage...\n" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "ERROR:" << std::endl;
    std::cout << "u oh jadgoufrpci rnruidemoiru  nnmMcrew o  hnt.irto  iimsecnbàhuemm oksus u1 ,.gs e eece \nn rerunnou.b uu  iar meenoeoFo  n or nee.c'had spfrplodep  nèl9J,a icm\n" << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string tab[4] = {"DEBUG","INFO","WARNING","ERROR"};
    void    (Harl::*fptr[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == tab[i])
        {
            (this->*fptr[i])();
            return ;
        }
    }
    std::cout << "No instruction for this level\n" << std::endl;
}