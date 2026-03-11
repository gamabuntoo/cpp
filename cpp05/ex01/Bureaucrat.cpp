/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:11:22 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/11 13:11:22 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Bureaucrat::ExceptionCheckGrade(int grade)
{
	if (grade > 150)
		throw GradeTooHighException();
	else if (grade <= 0)
		throw GradeTooLowException();
}

void	Bureaucrat::IncrementGrade(void)
{
	ExceptionCheckGrade(this->_grade-1);
	this->_grade--;
	std::cout << this->_name << " has been promoted, grade: " << this->_grade << std::endl;
}

void	Bureaucrat::DecrementGrade(void)
{
	ExceptionCheckGrade(this->_grade+1);
	this->_grade++;
	std::cout << this->_name << " has been demoted, grade: " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	ExceptionCheckGrade(grade);
	this->_grade = grade;
	std::cout << "Bureaucrat " << this->_name << ", grade: " << this->_grade << " created\n";
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->_name << ", grade: " << this->_grade << " got fired\n";
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this != &bureaucrat)
		this->_grade = bureaucrat._grade;
	// this->_name = bureaucrat._name;
	std::cout << "Bureaucrat " << this->_name << ", is now grade : " << this->_grade << ", grade cloned from" << bureaucrat.getName() << "\n";
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	std::string tmp;

	tmp = this->_name;
	return (tmp);
}

int	Bureaucrat::getGrade(void) const
{
	int tmp;

	tmp = this->_grade;
	return (tmp);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);	
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " couldn't sign " << form << " because ";
		std::cerr << e.what() << '\n';
		return;
	}
	std::cout << *this << " signed " << form << "\n";
}