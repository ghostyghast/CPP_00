/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:35:39 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/10 19:23:20 by amaligno         ###   ########.fr       */
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

string	print_spaces(int n)
{
	string	str = "";
	for (int i = 0; i < n; i++)
		str += " ";
	return(str);
}

string	print_column(string content)
{
	string str;
	int len = content.length();

	if (len == 10)
		str = content;
	else if (len < 10)	
		str = print_spaces(10 - len) + content;
	else
	{
		content.resize(9);
		str = content + ".";
	}
	return (str);
}

void	print_contact(Contact contact)
{
	if (contact.get_first_name().empty())
	{
		cout << "Empty Contact\n";
		return ;
	}
	cout << "First name :" << contact.get_first_name() << '\n'
		 << "Last Name :" << contact.get_last_name()<< '\n'
		 << "Nickname :" << contact.get_nickname()<< '\n'
		 << "Darkest Secret" << contact.get_darkest_secret()<< '\n'
		 << "Phone Number :" << contact.get_phone_number()<< '\n';
}