/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:21:35 by lvarela           #+#    #+#             */
/*   Updated: 2022/04/06 15:12:16 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) { return ; }
Contact::~Contact(void) { return ; }

void		Contact::setVariable(std::string str, std::string variable)
{
	if (variable.compare("firstName") == 0)
		this->firstName = str;
	if (variable.compare("lastName") == 0)
		this->lastName = str;
	if (variable.compare("nickName") == 0)
		this->nickName = str;
	if (variable.compare("phoneNumber") == 0)
		this->phoneNumber = str;
	if (variable.compare("darkestSecret") == 0)
		this->darkestSecret = str;
	return ;
}

std::string	Contact::getVariable(std::string variable)
{
	if (variable.compare("firstName") == 0)
		return (this->firstName);
	if (variable.compare("lastName") == 0)
		return (this->lastName);
	if (variable.compare("nickName") == 0)
		return (this->nickName);
	if (variable.compare("phoneNumber") == 0)
		return (this->phoneNumber);
	if (variable.compare("darkestSecret") == 0)
		return (this->darkestSecret);
	return (NULL);
}

void		Contact::printContact(void)
{
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickName << std::endl;
	std::cout << this->phoneNumber << std::endl;
	std::cout << this->darkestSecret << std::endl;
}