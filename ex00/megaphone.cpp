/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:23 by lvarela           #+#    #+#             */
/*   Updated: 2022/03/14 16:41:44 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;
using std::cout;
using std::endl;

string stringUpper(string str);

int	main(int argc, char **argv)
{
	if (argc == 1)
		cout << "* LOUD ANF UNBEARABLE FEEDBACK NOISE *" << endl;
	for (int i = 1; i < argc; i++)
	{
		cout << stringUpper(argv[i]);
		if (argv[i + 1])
			cout << ' ';
		else
			cout << endl;
	}
	return 0;
}

string	stringUpper(string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return str;
}
