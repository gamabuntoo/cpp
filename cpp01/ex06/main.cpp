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

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    Harl    harry;
    std::string arg;

    arg = argv[1];
    harry.complain(arg);
    // harry.complain("INFO");
    // harry.complain("WARNING");
    // harry.complain("INFO");
    // harry.complain("DEBUG");
    // harry.complain("ERROR");
    // harry.complain("ERROR");
    // harry.complain("ERROR");
    // harry.complain("ERROR");
    return (0);
}