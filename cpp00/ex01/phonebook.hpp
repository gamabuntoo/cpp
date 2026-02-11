#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include <cstdlib>

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
class Contact {
	private:

	std::string		FirstName;
	std::string 	LastName;
	std::string 	Nickname;
	long long int	num;
	std::string 	Secret;

	std::string	truncontact(std::string str)
	{
		if (str.length() > 10)
			return (str.substr(0, 9) + ".");
		return (str);
	}


	public:

	void	Init_empty(void)
	{
		FirstName = "";
		LastName = "";
		Nickname = "";
		num = 0;
		Secret = "";
	}
	void	get_name()
	{
		std::string str;

		std::cout << "Insert first name:\t";
		getline(std::cin, FirstName);
		std::cout << std::endl;

		std::cout << "Insert last name:\t";
		getline(std::cin, LastName);
		std::cout << std::endl;

		std::cout << "Insert nickname:\t";
		getline(std::cin, Nickname);
		std::cout << std::endl;

		std::cout << "Insert number:\t\t";
		getline(std::cin, str);
		num = atoll(str.c_str());
		if (num > 9999999999)
			num = 0;
		std::cout << num << std::endl;

		std::cout << "Insert Darkest Secret:\t";
		getline(std::cin, Secret);
		std::cout << std::endl;
	}

	void	read_name()
	{
		
		if (&FirstName && &LastName)
			std::cout << "\t |" << std::setw(10) << truncontact(FirstName) << "\t|" << std::setw(10) << truncontact(LastName) << "\t|" << std::setw(10) << truncontact(Nickname) << std::endl;
		else
			return ;
	}

	void	read_contact()
	{
		// if ((FirstName.empty()) == 0 && (LastName.empty()) == 0)
			std::cout << "\n. Name :\t" << FirstName << " " << LastName << std::endl;
		// else
		// 	return ;
		// if ((Nickname.empty()) == 0)
			std::cout << ". Nickname:\t" << Nickname << std::endl;
		// else
		// 	return ;
		// if (num)
			std::cout << ". Number :\t0" << num << std::endl;	
		// if ((Secret.empty()) == 0)
			std::cout << ". Secret :\t" << Secret << "\n" << std::endl;
		// else
			// return ;
	}
} ;


class Phonebook {
		
public:
	Contact Infos[9];
	int 	size;

	Phonebook(void)
	{
		int i = 0;

		while (i < 9)
			Infos[i++].Init_empty();
	}

	int	add_contact(int *s)
	{
		std::string str;

		if (size > 8)
			return (0);
		if (*s == 8)
		{
			std::cout << "Do you want to overwrite contact 0 ?\t Y/N" << std::endl;
			std::getline(std::cin, str);
			if (str == "Y")
				*s = 0;
			else
				return (0);
		}
		if (size <= 9)
		{
			Infos[*s].get_name();
			if (size < 8)
				size += 1;
			// if (str == "Y")
				// return (0);	
			return (1);
		}
		return (0);
	}

	void	search_contact()
	{
		int	i;
		std::string str;

		i = 0;
		std::cout << "\n[" << std::setw(10) << "Contacts" <<  "\t" << std::setw(10) << "-|First Name" << "\t" << std::setw(10) << "|Last Name" << "\t" << std::setw(10) << "|Nickname]\n" << std::endl;
		// std::cout << "________________________________________________________________________" << std::endl;
		std::cout << "----------------------------------------------------------" << std::endl;
		while (i < size)
		{
			std::cout << "- " << "[" << i << "]\t";
			Infos[i].read_name();
			i++;
		}
		std::cout << "\n___________________" << std::endl;
		std::cout << "Type the n° of the contact that you want to read:\n" << std::endl;
		std::getline(std::cin, str);
		std::cout << "___________________" << std::endl;
		if (str.empty())
			return ;
		if (std::atoll(str.c_str()) < size)
			Infos[std::atoll(str.c_str())].read_contact();
		else
			std::cout << "\ninvalid nb\n";
		return ;
	}
} ;


#endif