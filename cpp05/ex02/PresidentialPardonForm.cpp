/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:13:50 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/13 14:59:44 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form created, target: " << this->_target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\tPresidential Pardon Form destroyed, target: " << this->_target << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &zaphod)
{
	std::cout << this->getName() << " " <<  this->getGrade() << ", grade to exec: " << this->getGrade_e() << ", grades cannot be cloned from " << zaphod.getName() << "\n";
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getStatus() != 1)
		throw FormNotSignedException();
	else if (executor.getGrade() >= this->getGrade_e() && executor.getGrade() >= this->getGrade_e())
		throw GradeTooLowExecException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
	return ;
}

