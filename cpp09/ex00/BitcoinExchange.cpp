/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:28:55 by gule-bat          #+#    #+#             */
/*   Updated: 2026/06/30 18:36:54 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	Btc_dataset::get_input_file(std::string input)
{
	(void)input;
	// std::string *strres;
	// std::string str;
	// int i = 0;

	// while (std::getline(file, str))
	// 	i++;
	// strres = new std::string[i+1];
	// file.seekg(0, file.beg);
	// int i = 0;
	// while (std::getline(file, str) )
	// {
	// 	strres[i] = str;
	// 	// peut etre sstream pr grab les donnees
	// 	i++;
	// }
	return (0);
}

int	Btc_dataset::get_database()
{
	std::ifstream 		data("data.csv");
	std::string 		bf;
	std::string			res;
	std::stringstream	strm;
	float i = 256;	int x = 0;

	if (!data.is_open())	
		throw std::runtime_error("database csv error while opening");
	
	while (std::getline(data, bf))
	{
		x = 0;
		i = 0;
		if (bf == "date,exchange_rate")
			continue ;
		x = bf.find(",", 0);
		if (x == -1)
			continue ;
		i = std::atof(&bf[x+1]);
		bf.erase(x, bf.size() - x);
		res = bf;
		std::cout << res << ", " << i << std::endl; // i ok res non
	}
	return (0);
}

Btc_dataset::Btc_dataset()
{

}

Btc_dataset::Btc_dataset(const Btc_dataset &src)
{
	this->data = src.data;
}

Btc_dataset::Btc_dataset(std::string input_txt)
{
	if (get_database() == -1)
		throw std::runtime_error("Database exchange rate error");
	// file.open(input_txt.c_str());
	// if (!file.is_open() || input_txt.find(".txt", input_txt.find("."), 4))
		// throw std::runtime_error("Error while opening " + input_txt);
	get_input_file(input_txt);

}

Btc_dataset::~Btc_dataset()
{

}


Btc_dataset &Btc_dataset::operator=(const Btc_dataset &p)
{
	if (this != &p)
	{
		this->data = p.data;
	}
	return ((*this));
}


