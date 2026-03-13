/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:39:35 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/11 18:39:35 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <iostream>
#include <sstream>
#include <stdint.h>
#include <unistd.h>
#include <cstdlib>
#include <fstream>
// #include <time

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _sign;
		const int _grade;
		const int _grade_e;

		class GradeTooLowException : public std::exception 
		{
			    const char* what() const throw() 
				{
					return ("Grade too low, please enter a value =/higher than 1 and =/lower than 150");
				}
		};
		class GradeTooHighException : public std::exception 
		{
			    const char* what() const throw() 
				{
					return ("Grade too high, please enter a value =/higher than 1 and =/lower than 150");
				}
		};

	public:
			AForm(const std::string name, const int grade, const int grade_e);
			virtual ~AForm();
			void	ExceptionCheckGrade(const int grade);
			AForm 	&operator=(const AForm &aform);
			std::string	getName(void) const;
			int		getGrade(void) const;
			int		getGrade_e(void) const;
			int		getStatus(void) const;
			// void	IncrementGrade(void);
			// void	DecrementGrade(void);
			void	beSigned(Bureaucrat &bureaucrat);
			virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, AForm const &b);

#endif