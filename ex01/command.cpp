/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:03:09 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/26 12:26:03 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

const string	num = "0123456789";

void	ft_name(string first, string last, string nick)
{
	while (first.empty() || first.find_first_of(num) != string::npos)
    {
		cout << ORANGE1 << "|.:" << RESET << ORANGE2 << "Enter First Name: " << RESET;
		getline(cin, first);
		if (first.find_first_of(num) != string::npos)
			ft_error(3);
	}
	while (last.empty() || last.find_first_of(num) != string::npos)
	{
        cout << ORANGE1 << "|.:" << RESET << ORANGE2 << "Enter Last Name: " << RESET;
        getline(cin, last);
		if (last.find_first_of(num) != string::npos)
			ft_error(3);
	}
	while (nick.empty())
	{
        cout << ORANGE1 << "|.:" << RESET << ORANGE2 << "Enter Nickname: " << RESET;
        getline(cin, nick);
    }
}

void ft_phone(string phone)
{
    while (phone.empty() || phone.find_first_not_of(num) != string::npos)
    {
        cout << ORANGE1 << "|.:" << RESET << ORANGE2 << "Enter Phone Number (digits only): " << RESET;
        getline(cin, phone);
        if (phone.find_first_not_of(num) != string::npos)
			ft_error(4); 
    }
}

void	ft_secret(string secret)
{
	cout << ORANGE1 << "|.:Enter" << RESET;
	cout << PURPLE<< " Darkest Secret" << RESET;
	cout << ORANGE2 << ": " << RESET;
	getline(cin, secret);
}