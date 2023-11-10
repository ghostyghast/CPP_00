/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:14:06 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/10 17:39:01 by amaligno         ###   ########.fr       */
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
	Contact *cont = &this->contacts[this->_index]; 
	cont->set_first_name(check_field("First Name"));
	cont->set_last_name(check_field("Last Name"));
	cont->set_nickname(check_field("Nickname"));
	cont->set_darkest_secret(check_field("Darkest Secret"));
	cont->set_phone_number(check_field("Phone Number"));
	cout << "Contact added ! :D\n";
	this->_index = (_index + 1) % 8;
	}
void	PhoneBook::SEARCH(void){
	
}
