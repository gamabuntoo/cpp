#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include <cstdlib>

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {
	private:
		std::string	name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		void    give_name(std::string name);
} ;

// Zombie	*newZombie(std::string name);
Zombie  *zombieHorde(int N, std::string name);

#endif