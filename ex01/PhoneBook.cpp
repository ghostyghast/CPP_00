/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:14:06 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/11 18:44:38 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "PhoneBook_utils.hpp"

PhoneBook::PhoneBook(void){
	cout << "Hello :), welcome to this awesome PhoneBook!" << '\n';
	this->_index = 0;
}

PhoneBook::~PhoneBook(void){
	cout << "Bye :D" << '\n';
}

void	PhoneBook::ADD(void){
	Contact *cont = &this->_contacts[this->_index]; 
	cont->set_first_name(check_field("First Name"));
	cont->set_last_name(check_field("Last Name"));
	cont->set_nickname(check_field("Nickname"));
	cont->set_darkest_secret(check_field("Darkest Secret"));
	cont->set_phone_number(check_field("Phone Number"));
	cout << "Contact added ! :D\n";
	this->_index = (_index + 1) % 8;
}

void	PhoneBook::SEARCH(void){
	string	str;

	if (!this->_contacts[0].get_first_name().size())
	{
		cout << "You have no friends :(\n";
		return ;
	}
	cout << "---------------------------------------------" << '\n'
		 << "|     Index|  Fst Name|  Lst Name|  Nickname|" << '\n'
		 << "---------------------------------------------" << '\n';
	for (int i = 0; i < 8 && this->_contacts[i].get_first_name().size(); i++)
	{
		cout << '|' << print_spaces(9) << i
			 << '|' << print_column(this->_contacts[i].get_first_name())
			 << '|' << print_column(this->_contacts[i].get_last_name())
			 << '|' << print_column(this->_contacts[i].get_nickname())<< '|' << '\n'
			 << "---------------------------------------------" << '\n';
	}
	cout << "Enter index from 0 - 7\n"
		 << ">> ";
	getline(cin, str);
	while ((str.empty() || str.length() > 1) ||
			(str[0] < '0' || str[0] > '7'))
	{
		cout << "Invalid input\n"
			 << ">> ";
		getline(cin, str);
	}
	print_contact(this->_contacts[str[0] - '0']);
}
