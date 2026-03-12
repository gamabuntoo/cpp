/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:13:50 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/12 16:39:24 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form created, target :" << this->_target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\tPresidential Pardon Form destroyed, target :" << this->_target << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &zaphod)
{
	if (this != &zaphod)
	{
		this->_grade = 
	}
}