/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:12:58 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/13 16:07:30 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubberry Creation Form", 145, 137), _target(target)
{
	std::cout << "Shrubbery Creation Form created, target: " << this->_target << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\tShrubbery Creation Form destroyed, target: " << this->_target << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &path)
{
	std::cout << this->getName() << " " <<  this->getGrade() << ", grade to exec: " << this->getGrade_e() << ", grades cannot be cloned from " << path.getName() << "\n";
	return (*this);
}


void	ShrubberyCreationForm::plant_tree(std::string path) const
{
	std::ofstream file;

	const std::string f = path + "_shrubbery";
	file.open(f.c_str());
	if (!file.is_open())
	{
		throw CantGrowException();
		return ;
	}
	file << "		   ****# **\n            *     ***#*]*#***                *\n		 **#\b*[#*[//*#*        *\n       *      *--*_>// \b /*-**        \n		 *]\b_     |*\b \n		  _ | 	 |* *		*    *\n		    \b|	|\n  *              *  | ] ||\n_______________---_/     [-__________________\n";
	file.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getStatus() != 1)
		throw FormNotSignedException();
	else if (executor.getGrade() >= this->getGrade_e() && executor.getGrade() >= this->getGrade_e())
		throw GradeTooLowExecException();
	else
	{
		try
		{
			plant_tree(this->_target);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "Shrubberry Tree" << this->_target << "successfully planted\n";
	}
	return ;
}