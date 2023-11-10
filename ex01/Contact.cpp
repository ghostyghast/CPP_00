/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:14:10 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/10 16:45:08 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

string	Contact::get_first_name(){
	return (this->_first_name);
}

string	Contact::get_last_name(){
	return (this->_last_name);
}

string	Contact::get_nickname(){
	return (this->_nickname);
}

string	Contact::get_darkest_secret(){
	return (this->_darkest_secret);
}

string	Contact::get_phone_number(){
	return (this->_phone_number);
}

void	Contact::set_first_name(string str){
	this->_first_name = str;
}

void	Contact::set_last_name(string str){
	this->_last_name = str;
}

void	Contact::set_nickname(string str){
	this->_nickname = str;
}

void	Contact::set_darkest_secret(string str){
	this->_darkest_secret = str;
}

void	Contact::set_phone_number(string str){
	this->_phone_number = str;
}
