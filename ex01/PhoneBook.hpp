/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:42:09 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/10 19:12:54 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private	:
		int		_index;
		Contact _contacts[8];
	public	:
		//Constructor
		PhoneBook(void);
		//Destructor
		~PhoneBook(void);
		//Methods
		void ADD(void);
		void SEARCH(void);
};

#endif