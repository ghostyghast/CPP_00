/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:14:06 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/09 19:27:35 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

# include "PhoneBook.hpp"
# include "PhoneBook_utils.cpp"

PhoneBook::PhoneBook(void){
	cout << "Hello :), welcome to this awesome PhoneBook" << '\n'
	<< "Enter one of our commands :D :\n" 
	<< "ADD : Save a new contact\n"
	<< "SEARCH : Display a specific contact\n" 
	<< "EXIT : Quit the phonebook :(" << '\n';
	this->_index = 0;
}

PhoneBook::~PhoneBook(void){
	cout << "Bye :D" << '\n';
}

void	PhoneBook::ADD(void){
	Contact *cont = &this->contacts[this->_index]; 
	cont->set_first_name(check_field("Enter their first name"));
	cont->set_last_name(check_field("Enter their last name"));
	cont->set_nickname(check_field("Enter their nickname"));
	cont->set_darkest_secret(check_field("Enter their Darkest Secret"));
	cont->set_phone_number(check_field("Enter their Phone Number"));
	
}

#endif