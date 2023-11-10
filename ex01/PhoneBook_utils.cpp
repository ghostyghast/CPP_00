/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:35:39 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/10 17:38:30 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

//Checks whether the given string has only numeric characters
bool	has_alpha(string str)
{
	const char *str1 = str.c_str();
	while (*str1)
	{
		if (*str1 < '0' || *str1 > '9')
			return (true);
		str1++;
	}
	return (false);
}

//Checks input for empty string, displays a message when empy, and waits
//until input is recieved then returns it. Also makes sure ph
string	check_field(string message){
	string str;
	
	cout << "Enter their " << message << "...\n";
	cout << ">> ";
	getline(cin, str);
	while (str.empty())
	{
		cout << "Contact field cannot be empty" << '\n';
		cout << ">> ";
		getline(cin, str);
	}
	while (has_alpha(str) && message.find("Number") != string::npos)
	{
		if (str.length() == 0)
			cout << "Contact field cannot be empty" << '\n';
		else		
			cout << "Phone number field must only contain numbers" << '\n';
		cout << ">> ";
		getline(cin, str);
	}
	return (str);
}