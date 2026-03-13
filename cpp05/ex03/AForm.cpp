/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:47:24 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/11 18:47:24 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

void	AForm::ExceptionCheckGrade(int grade)
{
	if (grade > 150)
		throw GradeTooHighException();
	else if (grade <= 0)
		throw GradeTooLowException();
}

AForm::AForm(const std::string name, const int grade, const int grade_e) : _name(name), _sign(0), _grade(grade), _grade_e(grade_e)
{
	ExceptionCheckGrade(grade);
	ExceptionCheckGrade(grade_e);
	std::cout << "Form " << this->_name << ", grade: " << this->_grade << ", grade to exec: " << this->_grade_e <<" created\n";
}
AForm::~AForm()
{
	std::cout << "\tForm " << this->_name << " signed:" << this->getStatus() << ", grade: " << this->_grade << ", grade to exec: " << this->_grade_e << " got destroyed\n";
}
AForm &AForm::operator=(const AForm &aform)
{
	std::cout << "Form " << this->_name << ", keep it's grade : " << this->_grade << ", grade to exec: " << this->_grade_e << ", grades cannot be cloned from " << aform.getName() << "\n";
	return (*this);
}

// void	Aform::IncrementGrade(void)
// {
// 	ExceptionCheckGrade(this->_grade-1);
// 	this->_grade--;
// 	std::cout << this->_name << " has been promoted, grade: " << this->_grade << std::endl;
// }

// void	Aform::DecrementGrade(void)
// {
// 	ExceptionCheckGrade(this->_grade+1);
// 	this->_grade++;
// 	std::cout << this->_name << " has been demoted, grade: " << this->_grade << std::endl;
// }

std::string	AForm::getName(void) const
{
	std::string tmp;

	tmp = this->_name;
	return (tmp);
}

int	AForm::getGrade(void) const
{
	int tmp;

	tmp = this->_grade;
	return (tmp);
}

int	AForm::getGrade_e(void) const
{
	int tmp;

	tmp = this->_grade_e;
	return (tmp);
}

int AForm::getStatus(void) const
{
	bool s = this->_sign;
	if (s)
		return 1;
	return (0);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_grade)
		throw GradeTooLowException();
	else
		this->_sign = 1;
}

std::ostream &operator<<(std::ostream &os, AForm const &b)
{
	os << b.getName() << ", Aform grade " << b.getGrade() << " signed:" << b.getStatus() << ", grade to exec:" << b.getGrade_e() << std::endl;
	return os;
}