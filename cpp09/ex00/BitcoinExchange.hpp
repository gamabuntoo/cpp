/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:28:51 by gule-bat          #+#    #+#             */
/*   Updated: 2026/07/01 18:02:01 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <map>


class   Btc_dataset {
    private:
        std::map<std::string, float> data;
        std::ifstream file;
    public:
        Btc_dataset();
        Btc_dataset(std::string input_txt);
        Btc_dataset(const Btc_dataset &src);
        // Btc_dataset(const Btc_dataset &p);
        int	get_input_file();
        Btc_dataset &operator=(const Btc_dataset &p);
        int check_line(std::string line);
		int	check_value(std::string str, std::string date, float amnt);
        int get_database();
        
        ~Btc_dataset();
};

