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
    Zombie  *z = zombieHorde(5, "Serge");
    for (int i = 0; i < 5; i++)
    {
        z[i].announce();
        std::cout << i << std::endl;
    }
    delete[] z;
    return (0);
}