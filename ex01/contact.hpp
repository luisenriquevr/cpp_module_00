/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:37:21 by lvarela           #+#    #+#             */
/*   Updated: 2022/04/04 11:33:37 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

const int MAX_CONTACTS = 8;
const int COLUMN_WITH = 10;

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		void			saveFirstName(std::string);
		void			saveLastName(std::string);
		void			saveNickName(std::string);
		void			savePhoneNumber(std::string);
		void			saveDarkestSecret(std::string);
		//void			printContact(Contact);
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickName(void);
		std::string		getPhoneNumber(void);
		std::string		getDarkestSecret(void);

	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickName;
		std::string		phoneNumber;
		std::string		darkestSecret;
};

Contact					addContact(void);
void					printPhoneBook(Contact phoneBook[], int nContacts);

#endif