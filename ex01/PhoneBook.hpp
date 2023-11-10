/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:42:09 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/10 16:44:36 by amaligno         ###   ########.fr       */
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
		PhoneBook(void);
		//Destructor
		~PhoneBook(void);
		//Methods
		void ADD(void);
		void SEARCH(void);
};

#endif