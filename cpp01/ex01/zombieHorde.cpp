/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:21:05 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/07 16:21:05 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie *zomb = new Zombie[N];
    if (!zomb)
        return (NULL);
    for (int i = 0; i < N; i++)
        zomb[i].give_name(name);
    return (zomb);
}