/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:41:13 by lvarela           #+#    #+#             */
/*   Updated: 2022/07/02 18:51:34 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// ADD para añadir contacto
// SEARCH para buscar contacto
// EXIT para salir de la agenda
// No puede haber mas de 8 contactos, se irán borrando los mas antiguos

static void		initPrint()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "      ~~~~~~~~~~~ phoneBook ~~~~~~~~~~~~     " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "        Use ADD, SEARCH & EXIT comands       " << std::endl;
	std::cout << "      Note: You can save only 8 contacts     " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}



int main()
{
	int				nContacts;
	int				pos;
	Contact			phoneBook[MAX_CONTACTS];
	std::string		cmd;
	
	nContacts = 0;
	pos = 0;
	while (1) {
		initPrint();
		getline(std::cin, cmd, '\n');
		if (std::cin.fail())
			exit(1);
		if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD") {
			if (nContacts < MAX_CONTACTS) {
				phoneBook[pos++] = addContact();
				nContacts++;
			}
			else {
				if (pos == MAX_CONTACTS)
					pos = 0;
				phoneBook[pos++] = addContact();
				std::cout << "NOTE: The oldest contact was deleted." << std::endl;
			}
		}
		else if (cmd == "SEARCH") {
			if (nContacts)
				printPhoneBook(phoneBook, nContacts);
			else
				std::cout << "NOTE: PhoneBook is empty." << std::endl;
		}
		else
			std::cout << "NOTE: Comand not found." << std::endl;
	}
	return 0;
}