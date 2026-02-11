/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:14:42 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/06 17:14:42 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    Zombie *zomb = newZombie("Vincent");
    if (!zomb)
        return (std::cerr << "Our magic couldn't revive this zombie...", 1);
    randomChump("roger");
    zomb->announce();
    delete zomb;
    return (0);
}