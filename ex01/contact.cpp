/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:21:35 by lvarela           #+#    #+#             */
/*   Updated: 2022/04/04 11:35:07 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) { return ; }
Contact::~Contact(void) { return ; }

/*
void		Contact::printContact(Contact)
{
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickName << std::endl;
	std::cout << this->phoneNumber << std::endl;
	std::cout << this->darkestSecret << std::endl;
}
*/

void		Contact::saveFirstName(std::string str)
{
	this->firstName = str;
	return ;
}

void		Contact::saveLastName(std::string str)
{
	this->lastName = str;
	return ;
}

void		Contact::saveNickName(std::string str)
{
	this->nickName = str;
	return ;
}

void		Contact::savePhoneNumber(std::string str)
{
	this->phoneNumber = str;
	return ;
}

void		Contact::saveDarkestSecret(std::string str)
{
	this->darkestSecret = str;
	return ;
}

std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string Contact::getLastName(void)
{
	return (this->lastName);
}

std::string Contact::getNickName(void)
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}
