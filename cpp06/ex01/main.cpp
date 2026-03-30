/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 14:53:32 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/30 18:38:17 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 1)
		return (std::cout << "too many args" << std::endl, 1);
	Data *d = new Data(12, 14, 25);

	uintptr_t p = Serializer::serialize(d);
	Data *d1 = Serializer::deserialize(p);

	std::cout << d1->x << " " << d1->y << " " <<d1->z << std::endl;
	
	delete d;
}
