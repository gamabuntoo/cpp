#include <iostream>
#include <string>
#include "phonebook.hpp"


int	main(void)
{
	std::string line;
	Phonebook book;
	int i;

	i = 0;
	book.size = 0;
	book.Infos[i].Init_empty();
	while (i < 9)
	{
		std::cout << "\n[\tPHONEBOOK\t]\n\nI- CMD: ADD, SEARCH, EXIT\n\n~ : ";
		std::getline(std::cin, line);
		if (!(std::cin))
			return (1);
		if (line.empty())
			continue;
		std::cout << std::endl;
		if (line == "ADD")
		{
			if (book.add_contact(&i) == 1)
				i++;
		}
		else if (line == "SEARCH")
		{
			book.search_contact();
			// continue ;
		}
		else if (line == "EXIT")
			return (1);
	}
	return (0);
}