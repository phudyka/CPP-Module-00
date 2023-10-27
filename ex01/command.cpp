/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:03:09 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/27 09:28:02 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	ft_name(string &first, string &last, string &nick)
{
	while (first.empty() || first.find_first_of(num) != string::npos)
    {
		cout << ORANGE1 << "|.:Enter a ";
		cout << BOLD << ORANGE2 << "First Name: " << RESET;
		getline(cin, first);
		if (first.find_first_of(num) != string::npos)
			ft_error(3);
	}
	while (last.empty() || last.find_first_of(num) != string::npos)
	{
        cout << ORANGE1 << "|.:Enter a ";
		cout << BOLD << ORANGE2 << "Last Name: " << RESET;
        getline(cin, last);
		if (last.find_first_of(num) != string::npos)
			ft_error(3);
	}
	while (nick.empty())
	{
        cout << ORANGE1 << "|.:Enter a ";
		cout << BOLD << ORANGE2 << "Nickname: " << RESET;
        getline(cin, nick);
    }
	return (1);
}

int	ft_phone(string &phone)
{
    while (phone.empty() || phone.find_first_not_of(num)!= string::npos || phone.length() > 15)
    {
        cout << ORANGE1 << "|.:Enter a ";
		cout << BOLD << ORANGE2 << "Phone Number: " << RESET;
        getline(cin, phone);
        if (phone.find_first_not_of(num) != string::npos)
			ft_error(4);
		if (phone.length() > 15)
			ft_error(5);	
    }
	return (1);
}

int	ft_secret(string &secret)
{
	cout << ORANGE1 << "|.:Enter your" << RESET;
	cout << PURPLE << BOLD << " *Darkest Secret*" << RESET;
	cout << ORANGE1 << ": " << RESET;
	getline(cin, secret);
	cout << ORANGE1 << "+_____________[" << RESET;
	cout << ORANGE2 << "contact  added" << RESET;
	cout << ORANGE1 << "]______________+" << RESET << endl;
	return (1);
}