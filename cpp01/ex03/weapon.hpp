/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:16:53 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/07 18:16:53 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON
# define WEAPON

class   Weapon {
    private:
        std::string type;
    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon(void);
        std::string &getType(void);
        void    setType(std::string type);
}   ;

#endif