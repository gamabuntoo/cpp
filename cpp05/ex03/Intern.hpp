/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:40:49 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/13 16:45:33 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern &operator=(const Intern &intern);
		AForm *makeForm(std::string form, std::string target);
};

#endif