/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:55:52 by gule-bat          #+#    #+#             */
/*   Updated: 2026/04/22 20:04:25 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

// #include <iostream>


template <typename T>
Array<T>::Array() : _size(0)
{
	array = new T [0];
}


template <typename T>
Array<T>::Array(unsigned int s) : _size(s)
{
	array = new T [this->_size];
}



template <typename T>
Array<T>::Array(const Array &src) : _size(src._size)
{
	array = NULL;
	*this = src;
}

template <typename T>
T&	Array<T>::operator=(const Array &src)
{
	if (this->array != NULL)
		delete this->array;
	if (src->_size)
	{
		this->_size = src->_size;
		this->array = new T [this->_size];
		for (int x = 0; i < this->_size; i++)
			this->array[i] = src->array[i];
	}
	return (*this);
}


template <typename T>
T& Array<T>::operator[](unsigned int s)
{
	if (s > _size)
		return //exception a finir apres 
}

template <typename T>
Array<T>::~Array()
{
	if (array != NULL)
	delete array [];
}



// Array(unsigned int s);
// ~Array();
// T&	operator[](unsigned int s);

#endif