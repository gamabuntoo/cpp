/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:32:24 by gule-bat          #+#    #+#             */
/*   Updated: 2026/05/27 21:39:42 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutated.hpp"


int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << " top\n"<< std::endl;
	std::cout << mstack.bot() << " bot\n"<< std::endl;
	mstack.pop();
	std::cout << mstack.size() << " size\n" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	std::cout << mstack.top() << " top\n"<< std::endl;
	std::cout << mstack.bot() << " bot\n"<< std::endl;
	std::cout << mstack.size() << " size\n" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	int i = 0;
	while (it != ite)
	{
		std::cout << *it << " index :\t\t " << i << "\n" << std::endl;
		i++;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}