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
#include "Form.hpp"

int	main(void)
{
	Bureaucrat a1 = Bureaucrat("Serge", 1);
	Form		f1 = Form("Sondage", 150, 150);
	a1.signForm(f1);

	std::cout << "\n\n";
	Bureaucrat a2 = Bureaucrat("Roger", 150);
	Form		f2 = Form("Sondage", 15, 15);
	a2.signForm(f2);
	std::cout << "\n\n";
	std::cout << "\n\n";
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