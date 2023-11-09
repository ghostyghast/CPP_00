/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:42:09 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/09 16:25:08 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private	:
		Contact contacts[8];
		int		_index;
	public	:
		//Constructor
		PhoneBook();
		//Destructor
		~PhoneBook();
		//Methods
		void ADD();
		void SEARCH();
};

# include "PhoneBook.cpp"

#endif