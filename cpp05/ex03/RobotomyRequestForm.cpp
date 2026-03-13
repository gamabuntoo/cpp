/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:13:58 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/13 17:30:31 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << "Robotomy Request Form created, target: " << this->_target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\tRobotomy Request Form destroyed, target: " << this->_target << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &bot)
{
	std::cout << this->getName() << " " <<  this->getGrade() << ", grade to exec:" << this->getGrade_e() << ", grades cannot be cloned from " << bot.getName() << "\n";
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(0));
	int y = 1+rand() % 2;

	if (this->getStatus() != 1)
		throw FormNotSignedException();
	else if (executor.getGrade() >= this->getGrade_e())
		throw GradeTooLowExecException();
	else
	{
		for (int x = 0; x < 3; x++)
		{
			std::cout << "*DRrrrrrBBrrrDzzDzdzdBBrrvvvvvvVcddzzz*\n";
			usleep(1000005);
		}
		if (y == 1)
			std::cout << this->_target << " has been robotomized\n";
		else
		{
			std::cout << "...";
			usleep(1000000);
			std::cout << this->_target << " robotomy failed...\n";
		}
	}
	return ;
}