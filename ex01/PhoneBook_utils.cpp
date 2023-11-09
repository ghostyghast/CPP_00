/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:35:39 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/09 19:39:41 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

string	check_field(string message){
	string str;
	
	cout << message << '\n';
	cin >> str;
	while (str.length() == 0)
	{
		cout << "Contact field cannot be empty" << '\n';
		cin >> str;
	}
	while (message.find("Number") > 0 && !has_alpha(message))
	return (str);
}

bool	has_alpha(string str)
{
	const char *str1 = str.c_str();
	while (str1)
	{
		if (*str1 < '0' || *str1 > '9')
			return (true);
	}
	return (false);
}