/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addCmd.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:54:24 by lvarela           #+#    #+#             */
/*   Updated: 2022/04/06 15:55:14 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact				addContact(void)
{
	Contact			newContact;
	std::string		buffer;

	std::cout << "Type first name: ";
	std::getline(std::cin, buffer, '\n');
	newContact.setVariable(buffer, "firstName");
	std::cout << "Type last name: ";
	std::getline(std::cin, buffer, '\n');
	newContact.setVariable(buffer, "lastName");
	std::cout << "Type nick name: ";
	std::getline(std::cin, buffer, '\n');
	newContact.setVariable(buffer, "nickName");
	std::cout << "Type phone number: ";
	std::getline(std::cin, buffer, '\n');
	newContact.setVariable(buffer, "phoneNumber");
	std::cout << "Type darkest secret: ";
	std::getline(std::cin, buffer, '\n');
	newContact.setVariable(buffer, "darkestSecret");
	std::cout << "New contact was saved! :)" << std::endl;
	return (newContact);
}