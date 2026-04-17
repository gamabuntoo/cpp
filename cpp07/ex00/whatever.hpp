/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:00:46 by gule-bat          #+#    #+#             */
/*   Updated: 2026/04/17 16:05:49 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T> 
T min(T &x, T &y)
{
    return (x<y) ? x : y;
}


template <typename U> 
U max(U &x, U &y)
{
    return (x>y) ? x : y;
}

template <typename R>
void swap(R &x, R &y)
{
	R v = x;
	x = y;
	y = v;	
}

#endif