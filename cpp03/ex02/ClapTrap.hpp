/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 23:52:13 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/13 23:52:13 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP

#include <iostream>

class   ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_ad;
	protected:
		std::string		&get_name(void);
		unsigned int	&get_health(void);
		unsigned int	&get_energy(void);
		unsigned int	&get_ad(void);
	public:
		ClapTrap(void);
		ClapTrap(std::string id);
		ClapTrap(ClapTrap &bot);
		~ClapTrap(void);

		ClapTrap &operator=(ClapTrap &bot);

		void	attack(const std::string target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	set_name(std::string name);
		void	print_hp(void);
};

// class	ScavTrap : public ClapTrap
// {
// 	private:
// 		bool	guard;
// 	public:
// 		ScavTrap(void);
// 		ScavTrap(std::string id);
// 		ScavTrap(ClapTrap &bot);
// 		~ScavTrap(void);
// 		void	attack(const std::string target);
// 		void	guardGate();

// };

#endif