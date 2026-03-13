/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:14:00 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/13 14:33:55 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_h
# define ROBOTOMY_REQUEST_FORM_h

#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
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
		class FormNotSignedException : public std::exception 
		{
			    const char* what() const throw() 
				{
					return ("Form not signed, please sign form to execute it");
				}
		};
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &zaphod);
		void	execute(Bureaucrat const & executor) const;
};

#endif