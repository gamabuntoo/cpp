/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:47:51 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/07 16:47:51 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << &string << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << string << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
}