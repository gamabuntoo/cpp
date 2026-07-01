/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:28:55 by gule-bat          #+#    #+#             */
/*   Updated: 2026/07/01 04:47:10 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	Btc_dataset::get_input_file()
{
	static int f = 0;
	std::string str;

	while (std::getline(this->file, str))
	{
		if (str.empty())
			return (-1);
		std::string date;
		float		amount = 0;
		int x = str.find('|', 0);
		if (str == "date | value" && f == 0)
		{
			f++;
			continue ;
		}
		if (std::isalpha(str[0]) && f != 0)
			throw std::runtime_error("error input alphanumeric value after line 0");
		date = str.substr(0, x - 1);
		amount = atof(&str[x + 1]);
		if (amount < 0 || amount > 1000)
			throw std::runtime_error("Error: Value higher than 1000 or lower than 0");
		if (str.size() <= 12)
			throw std::runtime_error("Error: Wallet amount missing :" + str);
	
// PLEINS DE CONDITONS GO SLEEP MTN
		
		std::map<std::string, float>::iterator i = data.lower_bound(date);
		if (i == this->data.end())
			throw std::runtime_error("Error: input date:" + date);
		else
			std::cout << date << " : " << " value :" << i->second << " Amount: "<< amount * i->second << "€" << std::endl;
		f++;
	}
	return (0);
}

int	Btc_dataset::get_database()
{
	std::ifstream 		data("data.csv");
	std::string 		bf;
	std::string			res;
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
		res = bf.substr(0, x);
		this->data[res] = i;
	}
	return (0);
}

Btc_dataset::Btc_dataset()
{
	if (get_database() == -1)
		throw std::runtime_error("Database exchange rate error");
}

Btc_dataset::Btc_dataset(const Btc_dataset &src)
{
	this->data = src.data;
}

Btc_dataset::Btc_dataset(std::string input_txt)
{
	if (get_database() == -1)
		throw std::runtime_error("Database exchange rate error");
	file.open(input_txt.c_str());
	if (!file.is_open() || (input_txt.find(".txt") == std::string::npos || input_txt.size() == 4))
		throw std::runtime_error("Error while opening " + input_txt);
	while (file.good())
	{
		try
		{
			while (get_input_file() > 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

Btc_dataset::~Btc_dataset()
{
	if (file.is_open())
		file.close();
}


Btc_dataset &Btc_dataset::operator=(const Btc_dataset &p)
{
	if (this != &p)
	{
		this->data = p.data;
	}
	return ((*this));
}


