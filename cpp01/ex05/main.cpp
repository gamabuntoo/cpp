/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:46:33 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/20 13:46:33 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    harry;

    harry.complain("WARNING");
    harry.complain("INFO");
    harry.complain("DEBUG");
    harry.complain("ERROR");
    harry.complain("ERROR");
    harry.complain("ERROR");
    harry.complain("ERROR");
    return (0);
}