/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:46:36 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/20 13:46:36 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL20
#  define HARL20


#include <iostream>

// NE PAS OUBLIER METHODE DE CLASSE DANS LE .CPP: type classname::class(arguments)
// TJR AVEC CLASSNAME::FUNCTION sinon pas de compilation
class   Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public:
        Harl(void);
        ~Harl();
        void    complain(std::string level);
};

#endif