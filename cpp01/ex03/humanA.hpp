/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:16:46 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/07 18:16:46 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

#ifndef HUMAN_A
# define HUMAN_A

class   HumanA {
    private :
        Weapon &arm;
        std::string name;
    public :
        HumanA(std::string name, Weapon &w);
        ~HumanA();
        void    attack(void);
}   ;

#endif