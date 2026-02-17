#include <iostream>
#include <string>
// #include "phonebook.hpp"

int	main(int argc, char **argv)
{
	std::string stri;
	// Phonebook phone;

	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	for (int i = 1; i < argc; i++)
	{
		stri = argv[i];
		for (int j = 0; j < (int)stri.size(); j++)
		{
			if (std::islower(stri[j]))
				std::cout << (char)(stri[j] - 32);
			else
				std::cout << stri[j];
		}
	}
	std::cout << std::endl;
	return (0);
}
