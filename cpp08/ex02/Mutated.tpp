/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutated.tpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:32:22 by gule-bat          #+#    #+#             */
/*   Updated: 2026/05/27 21:30:17 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Mutated.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &p) : std::stack<T>(p)
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{	
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &mutant)
{
	if (this != &mutant)
		std::stack<T>::operator=(mutant);
	return (*this);
}

template <typename T>
void	MutantStack<T>::push(T val)
{	
	this->c.push_back(val);
}

template <typename T>
T& MutantStack<T>::top()
{
	return (this->c.back());
}

template <typename T>
T& MutantStack<T>::bot()
{
	return (this->c.front());	
}

template <typename T>
void	MutantStack<T>::pop()
{
	this->c.pop_back();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}