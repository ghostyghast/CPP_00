/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:42:34 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/10 17:39:05 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phone;
	string		input;

	cout << "\nEnter one of our commands :D :\n\n" 
	<< "ADD : Save a new contact\n"
	<< "SEARCH : Display a specific contact\n" 
	<< "EXIT : Quit the phonebook :(" << '\n';
	cout << ">> ";
	getline(cin, input);
	while (input != "EXIT")
	{
		if (input == "ADD")
			phone.ADD();
		else if (input.compare("SEARCH"))
			phone.SEARCH();
		else
			cout << "Invalid command :(" << '\n';
		cout << ">> ";
		getline(cin, input);
	}
	return (0);
}