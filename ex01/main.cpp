/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:34 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/26 18:08:02 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static void	ft_add(PhoneBook &phonebook)
{
	string	first;
	string	last;
	string 	nick;
	string	phone;
	string	secret;

	while (true)
	{
		cout << ORANGE1 << "+==================[" << RESET;
		cout << ORANGE2 << BOLD << "ADD" << RESET;
		cout << ORANGE1 << "]====================+" << RESET << endl;
		if (ft_name(first, last, nick) && ft_phone(phone) && ft_secret(secret))
			break ;
	}
	Contact newContact(first, last, nick, phone, secret);
	phonebook.addContact(newContact);
}

static void	ft_search(PhoneBook &phonebook)
{
    int		index;
    string	userInput;

    phonebook.displayTab();
    while (userInput.empty() || userInput.find_first_not_of(num) != string::npos)
    {
        cout << ORANGE1 << "|.:Enter a " << RESET;
        cout << BOLD << ORANGE2 << "Contact Index" << RESET;
        cout << ": " << RESET;
        getline(cin, userInput);
        stringstream ss(userInput);
        if (userInput.find_first_not_of(num) != string::npos)
            ft_error(4);
        else if (ss >> index)
            phonebook.searchContact(index);
        else
        {
            ft_error(2);
            return;
        }
    }
    return;
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
			else if (userInput.empty())
				continue ;
			else
				ft_error(1);
		}
	}
	else
		cout << RED << BOLD <<"'./PhoneBook' to launch the PhoneBook" << RESET << endl;
	return (0);	
}