/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:39:24 by gule-bat          #+#    #+#             */
/*   Updated: 2026/04/24 16:23:39 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int _size;
		class OutOfBoundsException : public std::exception
		{
			const char* what() const throw()
			{
				return ("\tArray class operator []: value out of bounds");
			}
		};
		void execpt_op(unsigned int s);
	public:
		Array();
		Array(unsigned int s);
		Array(const Array &src);
		~Array();
		T&	operator[](unsigned int s);
		// T&	operator=(const Array &src);
		Array<T>&	operator=(const Array &src);
		unsigned int	size(void);
};

#include "Array.tpp"

#endif