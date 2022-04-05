/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:41:13 by lvarela           #+#    #+#             */
/*   Updated: 2022/04/04 11:30:21 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// ADD para añadir contacto
// SEARCH para buscar contacto
// EXIT para salir de la agenda
// No puede haber mas de 8 contactos, se irán borrando los mas antiguos

static void		initPrint()
{
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "    ~~~~~~~~~~~ phoneBook ~~~~~~~~~~~~    " << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "       Use ADD, SEARCH & EXIT comands     " << std::endl;
	std::cout << "    Note: You can save only 8 contacts    " << std::endl;
	std::cout << "------------------------------------------" << std::endl;
}



int main()
{
	int				nContacts;
	Contact			phoneBook[MAX_CONTACTS];
	std::string		cmd;
	
	nContacts = 0;
	initPrint();
	while (1)
	{
		getline(std::cin, cmd, '\n');
		if (cmd == "EXIT")
			break ;
		/*else if (cmd == "ADD")
		{
			if (nContacts < MAX_CONTACTS)
				phoneBook[nContacts++] = addContact();
			else
			{
				std::cout << "The older contact was deleted" << std::endl;
				// Avisar de que se ha borrado el contacto mas antiguo para guardar este.
			}
		}*/
		else if (cmd == "SEARCH")
		{
			if (nContacts)
				printPhoneBook(phoneBook, nContacts);
			else
				std::cout << "PhoneBook is empty." << std::endl;
		}
	}
	return 0;
}