/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:48:17 by gule-bat          #+#    #+#             */
/*   Updated: 2026/02/14 14:48:17 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
		bool	guard;
	public:
		ScavTrap(void);
		ScavTrap(std::string id);
		ScavTrap(ClapTrap &bot);
		~ScavTrap(void);
		void	attack(const std::string target);
		void	guardGate();
};

#endif

