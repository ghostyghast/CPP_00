/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:42:22 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/10 17:30:58 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
using std::string;
using std::cout;
using std::cin;
using std::getline;

class Contact {
    private :
        string _first_name;
        string _last_name;
        string _nickname;
        string _darkest_secret;
        string _phone_number;
    public :
        //Getters
        string get_first_name();
        string get_last_name();
        string get_nickname();
        string get_darkest_secret();
        string get_phone_number();
        //Setters
        void   set_first_name(string str);
        void   set_last_name(string str);
        void   set_nickname(string str);
        void   set_darkest_secret(string str);
        void   set_phone_number(string str);
        
        
};

#endif