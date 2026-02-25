/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:51:17 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/25 16:51:17 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WANIMALS_H
# define WANIMALS_H

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &wronganimal);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &wronganimal);
		void setType(std::string type);
		std::string getType(void) const;
		void	makeSound()  const;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &cat);
		WrongCat &operator=(const WrongCat &cat);

		void	makeSound() const;
};

#endif