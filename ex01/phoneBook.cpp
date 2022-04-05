/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:57:19 by lvarela           #+#    #+#             */
/*   Updated: 2022/04/04 11:29:01 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

static std::string widthAdjust(std::string line)
{
	line = line.erase((COLUMN_WITH - 1), line.length() - (COLUMN_WITH - 1));
	line.append(("."));
	return (line);
}

void		printPhoneBook(Contact phoneBook[], int nContacts)
{
	std::string		fName;
	std::string		lName;
	std::string		nName;

	std::cout << std::setw(COLUMN_WITH);
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < nContacts; i += 1)
	{
		fName = phoneBook[i].getFirstName();
		lName = phoneBook[i].getLastName();
		nName = phoneBook[i].getNickName();
		
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
		//foundContact(phoneBook, nContacts);
	}
}