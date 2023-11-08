/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:33:57 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/31 09:28:15 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_awesome(void)
{
	std::cout << ORANGE1 << "+===========================================+" << std::endl;
	std::cout << "|          ┳┳┓    ┏┓                        |" << std::endl;
	std::cout << "|          ┃┃┃┓┏  ┣┫┓┏┏┏┓┏┏┓┏┳┓┏┓           |" << std::endl;
	std::cout << "|          ┛ ┗┗┫  ┛┗┗┻┛┗ ┛┗┛┛┗┗┗            |" << std::endl;
	std::cout << "|            ┏┓┓       ┳┓    ┓              |" << std::endl;
	std::cout << "|            ┃┃┣┓┏┓┏┓┏┓┣┫┏┓┏┓┃┏             |" << std::endl;
	std::cout << "|            ┣┛┛┗┗┛┛┗┗ ┻┛┗┛┗┛┛┗             |" << std::endl;
	std::cout << "+___________________________________________+" << std::endl;
	std::cout << "|...............: ";
	std::cout << BOLD << ORANGE2 << "COMMANDS"<< RESET ;
	std::cout << ORANGE1 << " :................|" << std::endl;
	std::cout << "|.:" << RESET;
	std::cout << ORANGE2 << BOLD << "ADD" << RESET;
	std::cout << ORANGE1 << "      .to add up to 8 users.          |" << std::endl;
	std::cout << "|.:"<< RESET;
	std::cout << ORANGE2 << BOLD << "SEARCH" << RESET;
	std::cout << ORANGE1 "   .to search for a user.          |" << std::endl;
	std::cout << "|.:" << RESET ;
	std::cout << ORANGE2 << BOLD << "EXIT" << RESET;
	std::cout << ORANGE1 << "     .to exit.                       |" << std::endl;
	std::cout << "+===========================================+" << RESET << std::endl;
}

void ft_error(int code)
{
    switch (code)
    {
		case 1:
			std::cout << ORANGE1 << "|.:";
			std::cout << BOLD << RED << "         .:[INVALID  COMMAND]:.        " << RESET;
			std::cout << ORANGE1 << ":.|" << RESET << std::endl;
			break ;
		case 2:
        	std::cout << ORANGE1 << "|.:";
        	std::cout << BOLD << RED << "           .:[INVALID INDEX]:.         " << RESET;
        	std::cout << ORANGE1 << ":.|" << std::endl;
        	std::cout << "+___________________________________________+" << RESET << std::endl;
        	break ;
    	case 3:
        	std::cout << ORANGE1 << "|.:";
        	std::cout << BOLD << RED << "           .:[ CHARS ONLY ]:.          " << RESET;
        	std::cout << ORANGE1 << ":.|" << RESET << std::endl;
        	break ;
    	case 4:
        	std::cout << ORANGE1 << "|.:";
        	std::cout << BOLD << RED << "          .:[ DIGITS ONLY ]:.          " << RESET;
        	std::cout << ORANGE1 << ":.|" << RESET << std::endl;
        	break ;
    	default:
        	break ;
    }
}

void	ft_command(void)
{
	std::cout << ORANGE1 << "|.:Enter a " << RESET;
	std::cout << BOLD << ORANGE2 << "COMMAND: " << RESET;
}

void	ft_exit(void)
{
	std::cout << ORANGE1 << "|.:           " << RESET;
	std::cout << BOLD << RED << ".:Exiting program:." << RESET;
	std::cout << ORANGE1 << "         :.|" << std::endl;
	std::cout << "+___________________________________________+" << RESET << std::endl;
}