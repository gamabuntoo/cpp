/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:16:41 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/07 18:16:41 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

#ifndef HUMAN_B
# define HUMAN_B

class   HumanB {
    private :
        Weapon *arm;
        std::string name;
    public :
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &w);
        void    attack(void);
}   ;

#endif