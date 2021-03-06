/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:23 by lvarela           #+#    #+#             */
/*   Updated: 2022/07/11 09:56:33 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string stringUpper(std::string str);

int	main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		std::cout << stringUpper(argv[i]);
	std::cout << std::endl;
	return 0;
}

std::string	stringUpper(std::string str) {
	for (int i = 0; i < (int)str.length(); i++)
		str[i] = toupper(str[i]);
	return str;
}
