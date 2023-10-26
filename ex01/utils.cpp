/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:33:57 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/26 15:32:08 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_awesome(void)
{
	cout << ORANGE1 << "+====================================+" << endl;
	cout << "|       ┳┳┓    ┏┓                    |" << endl;
	cout << "|       ┃┃┃┓┏  ┣┫┓┏┏┏┓┏┏┓┏┳┓┏┓       |" << endl;
	cout << "|       ┛ ┗┗┫  ┛┗┗┻┛┗ ┛┗┛┛┗┗┗        |" << endl;
	cout << "|         ┏┓┓       ┳┓    ┓          |" << endl;
	cout << "|         ┃┃┣┓┏┓┏┓┏┓┣┫┏┓┏┓┃┏         |" << endl;
	cout << "|         ┣┛┛┗┗┛┛┗┗ ┻┛┗┛┗┛┛┗         |" << endl;
	cout << "+____________________________________+" << endl;
	cout << "|...........: ";
	cout << BOLD << ORANGE2 << "COMMANDS"<< RESET ;
	cout << ORANGE1 << " :.............|" << endl;
	cout << "|.:" << RESET;
	cout << ORANGE2 << BOLD << "ADD" << RESET;
	cout << ORANGE1 << "      .to add up to 8 users.   |" << endl;
	cout << "|.:"<< RESET;
	cout << ORANGE2 << BOLD << "SEARCH" << RESET;
	cout << ORANGE1 "   .to search for a user.   |" << endl;
	cout << "|.:" << RESET ;
	cout << ORANGE2 << BOLD << "EXIT" << RESET;
	cout << ORANGE1 << "     .to exit.                |" << endl;
	cout << "+====================================+" << RESET << endl;
}

void	ft_error(int code)
{
	if (code == 1)
	{
		cout << ORANGE1 << "|.:" << RESET;
		cout << BOLD << RED << "      .:[INVALID COMMAND]:.     " << RESET;
		cout << ORANGE1 << ":.|" << RESET << endl;
	}
	else if (code == 2)
	{
		cout << ORANGE1 << "|.:" << RESET;
		cout << BOLD << RED << "       .:[INVALID INDEX]:.      " << RESET;
		cout << ORANGE1 << ":.|" << RESET << endl;
	}
	else if (code == 3)
	{
		cout << ORANGE1 << "|.:" << RESET;
		cout << BOLD << RED << "        .:[CHARS  ONLY]:.       " << RESET;
		cout << ORANGE1 << ":.|" << RESET << endl;
	}
	else if (code == 4)
	{
		cout << ORANGE1 << "|.:" << RESET;
		cout << BOLD << RED << "        .:[DIGITS ONLY]:.       " << RESET;
		cout << ORANGE1 << ":.|" << RESET << endl;
	}
	return ;
}

void	ft_command(void)
{
	cout << ORANGE1 << "|.:Enter a " << RESET;
	cout << BOLD << ORANGE2 << "COMMAND: " << RESET;
}

void	ft_exit(void)
{
	cout << ORANGE1 << "|.:      " << RESET;
	cout << BOLD << RED << ".:Exiting  program:." << RESET;
	cout << ORANGE1 << "      :.|" << endl;
	cout << "+====================================+" << RESET << endl;
}