/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 15:28:38 by gule-bat          #+#    #+#             */
/*   Updated: 2026/04/19 16:14:19 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename S, typename F>
void	iter(S *str, const size_t size, F fct)
{
	if (!str || !fct)
		return ;
	for (size_t x = 0; x <= size; x++)
		fct(str[x]);
}

#endif