/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:47:08 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/01 21:56:05 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<cctype>
using namespace std;

int main(int argc, char **argv)
{
	if (argc <= 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int i = 1; i < argc; i++)
			for(int j = 0; argv[i][j] != '\0'; j++)
				cout << (char)toupper(argv[i][j]);
	}
	cout << '\n';
	
}
