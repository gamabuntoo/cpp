/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:20:20 by gule-bat          #+#    #+#             */
/*   Updated: 2026/01/10 20:20:20 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sifl.hpp"

int	copy_n_check(std::ifstream *opened, std::string filename, std::string srch, std::string rplc)
{
	std::ofstream 	copy;
	std::string		buffer;
	int				i;

	copy.open(filename.c_str());
	if (!copy.is_open())
		return (std::cerr << "File can't be created\n" << std::endl, 1);
	while (getline(*opened, buffer))
	{
		i = buffer.find(srch);
		while (i >= 0)
		{
			buffer.erase(i, srch.size());
			buffer.insert(i, rplc);
			i = buffer.find(srch, i);
		}
		copy << buffer << std::endl;
	}
	copy.close();
	return (0);
}

int	scanning(std::string file, std::string srch, std::string rplc)
{
	std::ifstream opened;

	opened.open(file.c_str());
	if (opened.fail())
		return (std::cerr << "File doesn't exist\n" << std::endl, 1);
	if (copy_n_check(&opened, file + ".replace", srch, rplc))
		return (opened.close(), 1);
	opened.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "./s_i_f_l filename replace search\n" << std::endl, 1);
	std::string file = argv[1];
	std::string srch = argv[2];
	std::string rplc = argv[3];
	if (scanning(file, srch, rplc))
		return (1);
	return (0);
}