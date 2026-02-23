#pragma once

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class Phonebook {
		
	public:
		Contact Infos[9];
		int 	size;

	public:
		Phonebook();
		~Phonebook();
		int	add_contact(int *s);
		void	search_contact();
} ;

#endif