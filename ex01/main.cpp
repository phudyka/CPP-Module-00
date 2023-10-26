/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:34 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/26 12:27:11 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void ft_phoneNumber(string phone)
{
    while (phone.empty() || phone.find_first_not_of("0123456789") != string::npos)
    {
        cout << ORANGE1 << "|.:" << RESET << ORANGE2
			<< "Enter Phone Number: " << RESET << endl;
        getline(cin, phone);
        if (phone.find_first_not_of("0123456789") != string::npos)
           ft_error(3); 
    }
}

static void	ft_add(PhoneBook phonebook)
{
	string	first;
	string	last;
	string 	nick;
	string	phone;
	string	secret;

	while (first.empty() || last.empty() || nick.empty()
			|| phone.empty() || secret.empty())
	{
		ft_name(first, nick, last);
		ft_phone(phone);
		ft_secret(secret);
	}
	Contact newContact(first, last, nick, phone, secret);
	phonebook.addContact(newContact);
}

static void	ft_search(PhoneBook phonebook)
{
	int		index;
	string	userInput;

	phonebook.displayTab();
	cout << ORANGE2 << "|.:Enter contact index: " << RESET;
	cin >> index;
	getline(cin, userInput);
	stringstream ss(userInput);
	if (ss >> index)
		phonebook.searchContact(index);
	else
		cout << RED << "[INVALID INDEX]" << RESET << endl;
}

int	main(int argc, char **argv)
{
	string		userInput;
	PhoneBook	phonebook;
		
	(void)argv;
	if (argc == 1)
	{
		ft_awesome();
		while (1)
		{
			ft_command();
			getline(cin, userInput);
			if (userInput == "ADD")
				ft_add(phonebook);
			else if (userInput == "SEARCH")
				ft_search(phonebook);
			else if (userInput == "EXIT")
			{
				ft_exit();
				break ;
			}
			else
				ft_error(1);
		}
	}
	else
		cout << RED << "./PhoneBook to launch the PhoneBook" << RESET << endl;
	return (0);	
}