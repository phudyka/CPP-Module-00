/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:34 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/02 14:04:58 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static void	ft_add(PhoneBook &phonebook)
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	phone;
	std::string	secret;

	while (true)
	{
		std::cout << ORANGE1 << "+==================[" << RESET;
		std::cout << ORANGE2 << BOLD << "ADD" << RESET;
		std::cout << ORANGE1 << "]====================+" << RESET << std::endl;
		if (ft_name(first, last, nick) && ft_phone(phone) && ft_secret(secret))
			break ;
	}
	Contact newContact(first, last, nick, phone, secret);
	phonebook.addContact(newContact);
}

static void	ft_search(PhoneBook &phonebook)
{
    int			index;
    std::string	userInput;

    phonebook.displayTab();
    while (userInput.empty() || userInput.find_first_not_of(num) != std::string::npos)
    {
        std::cout << ORANGE1 << "|.:Enter a " << RESET;
        std::cout << BOLD << ORANGE2 << "Contact Index" << RESET;
        std::cout << ": " << RESET;
        std::getline(std::cin, userInput);
        std::stringstream ss(userInput);
        if (userInput.find_first_not_of(num) != std::string::npos)
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
	std::string	userInput;
	PhoneBook	phonebook;
		
	(void)argv;
	if (argc == 1)
	{
		ft_awesome();
		while (1)
		{
			ft_command();
			getline(std::cin, userInput);
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
		std::cout << RED << BOLD <<"'./PhoneBook' to launch the PhoneBook" << RESET << std::endl;
	return (0);	
}