/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:37:21 by lvarela           #+#    #+#             */
/*   Updated: 2022/07/02 18:40:00 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

const int MAX_CONTACTS = 3;
const int COLUMN_WITH = 10;

class	Contact {
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickName;
		std::string		phoneNumber;
		std::string		darkestSecret;
	public:
		Contact(void);
		~Contact(void);
		void			setVariable(std::string, std::string);
		std::string		getVariable(std::string);
		void			printContact(void);
};

Contact					addContact(void);
void					printPhoneBook(Contact phoneBook[], int nContacts);

#endif