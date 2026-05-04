/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:41:56 by gule-bat          #+#    #+#             */
/*   Updated: 2026/05/04 20:32:12 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
typename T::iterator easyfind(T& cont, const int i)
{
	typename T::iterator v = std::find(cont.begin(), cont.end(), i);
	if (v == cont.end())
		throw std::runtime_error("Exception easyfind:: value couldn't be found in container\n");
	std::cout << i << " is in container at position " << std::distance(cont.begin(), v) << "\n" ;
	return v;
}