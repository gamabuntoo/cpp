/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 14:52:50 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/30 17:36:13 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serializer::Serializer()
{

}

Serializer::~Serializer()
{
	
}

uintptr_t Serializer::serialize(Data *ptr)
{
	if (ptr == NULL)
		return (0);
	uintptr_t pt = reinterpret_cast<uintptr_t>(ptr);
	return (pt);
}

Data *Serializer::deserialize (uintptr_t raw)
{
	if (raw == 0)
		return (NULL);
	return (reinterpret_cast<Data *>(raw));
}