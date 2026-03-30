/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 14:53:35 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/30 17:24:51 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_H
# define SERIAL_H

#include <iostream>
#include <sstream>
#include <stdint.h>
#include "Data.hpp"

class	Serializer
{
	protected:
		Serializer();
		~Serializer();
	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize (uintptr_t raw);
};

#endif