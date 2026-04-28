/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:55:52 by gule-bat          #+#    #+#             */
/*   Updated: 2026/04/24 16:35:56 by gule-bat         ###   ########.fr       */
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
Array<T>&	Array<T>::operator=(const Array &src)
{
	if (this->array != NULL)
		delete [] this->array;
	if (src._size && this != &src)
	{
		this->_size = src._size;
		this->array = new T [this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->array[i] = src.array[i];
	}
	return ((*this));
}

template <typename T>
Array<T>::Array(const Array &src) : _size(src._size)
{
	array = NULL;
	*this = src;
}




template <typename T>
void Array<T>::execpt_op(unsigned int s)
{
	if (s >= this->_size || this->array == NULL)
	{
		std::cerr << "Index: " << s << ", size: " << this->_size << " ";
		throw OutOfBoundsException();
	}
}

template <typename T>
T& Array<T>::operator[](unsigned int s)
{
	try
	{
		if (s >= this->_size)
			std::cerr << "OUT OF BOUNDS EXCEPTION\n"; 
		execpt_op(s);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "\n";
		return (this->array[0]);
	}
	return (this->array[s]);
}

template <typename T>
Array<T>::~Array()
{
	if (array != NULL)
		delete [] array;
}

template <typename T>
unsigned int	Array<T>::size(void)
{
	unsigned int i = this->_size;
	return (i);
}

#endif