/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:05:04 by gule-bat          #+#    #+#             */
/*   Updated: 2026/03/11 16:05:04 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat a1 = Bureaucrat("Serge", 1);
	// Aform		f1 = Aform("Sondage", 150, 150);
	// a1.signAform(f1);

	std::cout << "\n\n";
	Bureaucrat a2 = Bureaucrat("Roger", 150);
	PresidentialPardonForm		f2 = PresidentialPardonForm("roger");
	// a2.signAform(f2);
	a1.signForm(f2);
	a1.executeForm(f2);
	std::cout << "\n\n";
	std::cout << "\n\n";
	Bureaucrat a3 = Bureaucrat("Roger", 11);
	RobotomyRequestForm		f3 = RobotomyRequestForm("roger");
	a3.signForm(f3);
	a3.executeForm(f3);
	std::cout << "\n\n";
	std::cout << "\n\n";
	Bureaucrat a4 = Bureaucrat("Roger", 11);
	Intern stagiaire;

	AForm		*f4 = stagiaire.makeForm("shrubbery creation form", "treeeee");
	a4.signForm(*f4);
	a2.executeForm(*f4);
	delete f4;
	// std::cout << "\n test try catch\n";
	// std::cout << "\n test try catch\n";
	// try
	// {
	// 	Bureaucrat a3 = Bureaucrat("Bob", 15);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << "\n";
	// }
	// std::cout << "\n" << a1 << std::endl;
	// std::cout << "\n test increment try catch\n";
	// try 
	// {	a1.IncrementGrade(); }
	// catch(const std::exception& e)
	// {	std::cerr << e.what() << "\n"; }

	// try {
	// 	a1.DecrementGrade(); }
	// catch(const std::exception& e) {
	// 	std::cerr << e.what() << "\n"; }

	// for (int x = 150; x > 1; x--)
	// {
	// 	try {
	// 		a1.DecrementGrade(); }
	// 	catch(const std::exception& e) {
	// 		std::cerr << e.what() << "\n"; }
	// }
	// Bureaucrat a3("Bob", 157);
	return (0);

}