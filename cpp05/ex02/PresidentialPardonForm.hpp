/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:13:55 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/13 14:30:14 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_h
# define PRESIDENTIAL_PARDON_FORM_h

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
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
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &zaphod);
		void	execute(Bureaucrat const & executor) const;
};


#endif