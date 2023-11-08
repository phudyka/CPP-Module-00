/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:03:09 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/31 09:35:38 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	ft_name(std::string &first, std::string &last, std::string &nick)
{
	while (first.empty() || first.find_first_of(num) != std::string::npos)
    {
		std::cout << ORANGE1 << "|.:Enter a ";
		std::cout << BOLD << ORANGE2 << "First Name: " << RESET;
		std::getline(std::cin, first);
		if (first.find_first_of(num) != std::string::npos)
			ft_error(3);
	}
	while (last.empty() || last.find_first_of(num) != std::string::npos)
	{
        std::cout << ORANGE1 << "|.:Enter a ";
		std::cout << BOLD << ORANGE2 << "Last Name: " << RESET;
        std::getline(std::cin, last);
		if (last.find_first_of(num) != std::string::npos)
			ft_error(3);
	}
	while (nick.empty())
	{
        std::cout << ORANGE1 << "|.:Enter a ";
		std::cout << BOLD << ORANGE2 << "Nickname: " << RESET;
        std::getline(std::cin, nick);
    }
	return (1);
}

int	ft_phone(std::string &phone)
{
    while (phone.empty() || phone.find_first_not_of(num)!= std::string::npos || phone.length() > 15)
    {
        std::cout << ORANGE1 << "|.:Enter a ";
		std::cout << BOLD << ORANGE2 << "Phone Number: " << RESET;
        std::getline(std::cin, phone);
        if (phone.find_first_not_of(num) != std::string::npos)
			ft_error(4);
		if (phone.length() > 15)
			ft_error(5);	
    }
	return (1);
}

int	ft_secret(std::string &secret)
{
	std::cout << ORANGE1 << "|.:Enter your" << RESET;
	std::cout << PURPLE << BOLD << " *Darkest Secret*" << RESET;
	std::cout << ORANGE1 << ": " << RESET;
	std::getline(std::cin, secret);
	std::cout << ORANGE1 << "+_____________[" << RESET;
	std::cout << ORANGE2 << "contact  added" << RESET;
	std::cout << ORANGE1 << "]______________+" << RESET << std::endl;
	return (1);
}