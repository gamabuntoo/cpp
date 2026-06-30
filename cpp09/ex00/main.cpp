/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:29:05 by gule-bat          #+#    #+#             */
/*   Updated: 2026/06/30 17:42:19 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (std::cerr << "./btc \"file.txt\"" << std::endl, EXIT_FAILURE);

    std::string in = argv[1];

    // try
    // {
        Btc_dataset x(in);
        
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    return (EXIT_SUCCESS);
}