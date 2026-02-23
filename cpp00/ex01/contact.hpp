/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:26:54 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/23 17:48:15 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include <cstdlib>

class Contact {
	private:
		std::string		FirstName;
		std::string 	LastName;
		std::string 	Nickname;
		long long int	num;
		std::string 	Secret;
	public:
		void	Init_empty(void);
		void	get_name();
		void	read_name();
		void	read_contact();
} ;

std::string	truncontact(std::string str);

#endif