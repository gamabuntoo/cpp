/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutated.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:27:14 by gule-bat          #+#    #+#             */
/*   Updated: 2026/05/27 21:26:58 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <limits>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack<T> &p);
		~MutantStack();
		MutantStack &operator=(const MutantStack &mutant);

		T& top();
		T& bot(); 
		void	pop();
		void	push(T val);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin();
		iterator	end();
};

#include "Mutated.tpp"