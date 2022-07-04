/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchCmd.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:57:19 by lvarela           #+#    #+#             */
/*   Updated: 2022/07/04 18:13:03 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

static void			searchContact(Contact phoneBook[], int nContacts)
{
	int				index;

	std::cout << "Type contact index and press enter: ";
	std::cin >> index;
	std::cout << std::endl;
	if (std::cin.good() && (index >= 0 && index < nContacts)) {
		phoneBook[index].printContact();
		std::cin.ignore(INT_MAX, '\n');
	}
	else {
		std::cin.clear();
		std::cout << "NOTE: No contact with this index was found. :(" << std::endl;
		std::cin.ignore(INT_MAX, '\n');
	}
}

static std::string	widthAdjust(std::string line) {
	line = line.erase((COLUMN_WITH - 1), line.length() - (COLUMN_WITH - 1));
	line.append(("."));
	return (line);
}

void				printPhoneBook(Contact phoneBook[], int nContacts) {
	std::string		fName;
	std::string		lName;
	std::string		nName;

	std::cout << std::setw(COLUMN_WITH);
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < nContacts; i += 1) {
		fName = phoneBook[i].getVariable("firstName");
		lName = phoneBook[i].getVariable("lastName");
		nName = phoneBook[i].getVariable("nickName");

		std::cout << "|" << std::setw(COLUMN_WITH) << i;
		if (fName.length() > COLUMN_WITH)
			fName = widthAdjust(fName);
		std::cout << "|" << std::setw(COLUMN_WITH) << fName;
		if (lName.length() > COLUMN_WITH)
			lName = widthAdjust(lName);
		std::cout << "|" << std::setw(COLUMN_WITH) << lName;
		if (nName.length() > COLUMN_WITH)
			nName = widthAdjust(nName);
		std::cout << "|" << std::setw(COLUMN_WITH) << nName;
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	searchContact(phoneBook, nContacts);
}
