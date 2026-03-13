/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:13:00 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/13 16:05:26 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
	private:
		std::string _target;
		
		class GradeTooLowExecException : public std::exception 
		{
			    const char* what() const throw() 
				{
					return ("Grade too low, please enter a value smaller or equal to grade/grade to exec");
				}
		};
		class CantGrowException : public std::exception
		{
				const char* what() const throw()
				{
					return ("Tree already named like this please rename tree before planting it");
				}
		};
		class FormNotSignedException : public std::exception 
		{
			    const char* what() const throw() 
				{
					return ("Form not signed, please sign form to execute it");
				}
		};
	
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &zaphod);
		void	execute(Bureaucrat const & executor) const;
		void	plant_tree(std::string path) const;
};

#endif