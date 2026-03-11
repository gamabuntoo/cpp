/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:11:42 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/11 13:11:42 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <sstream>
#include <stdint.h>
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
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
			Bureaucrat(const std::string name, int grade);
			~Bureaucrat();
			void	ExceptionCheckGrade(int grade);
			Bureaucrat &operator=(const Bureaucrat &bureaucrat);
			std::string	getName(void) const;
			int	getGrade(void) const;
			void	IncrementGrade(void);
			void	DecrementGrade(void);
			void	signForm(Form &form);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &b);

#endif