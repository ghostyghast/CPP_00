/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:32:07 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/10 19:21:20 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_UTILS_HPP
# define PHONEBOOK_UTILS_HPP

# include "PhoneBook.hpp"

bool	has_alpha(string str);
string	check_field(string message);
string	print_spaces(int n);
string	print_column(string content);
void	print_contact(Contact contact);

#endif