/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:33:57 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/26 12:13:50 by phudyka          ###   ########.fr       */
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
	cout << "|...........: COMMANDS :.............|" << RESET << endl;
	cout << ORANGE2 "|.:ADD     .to add up to 8 users.    |" << endl;
	cout << "|.:SEARCH  .to search for a user.    |" << endl;
	cout << "|.:EXIT    .to exit.                 |" << RESET << endl;
	cout << ORANGE1 << "+====================================+" << RESET << endl;
}

void	ft_error(int code)
{
	if (code == 1)
	{
		cout << ORANGE1 << "|.:" << RESET;
		cout << RED << "      .:[INVALID COMMAND]:.     " << RESET;
		cout << ORANGE1 << ":.|" << RESET << endl;
	}
	else if (code == 2)
	{
		cout << ORANGE1 << "|.:" << RESET;
		cout << RED << "       .:[INVALID INDEX]:.      " << RESET;
		cout << ORANGE1 << ":.|" << RESET << endl;
	}
	else if (code == 3)
	{
		cout << ORANGE1 << "|.:" << RESET;
		cout << RED << "        .:[CHARS  ONLY]:.       " << RESET;
		cout << ORANGE1 << ":.|" << RESET << endl;
	}
	else if (code == 4)
	{
		cout << ORANGE1 << "|.:" << RESET;
		cout << RED << "        .:[DIGITS ONLY]:.       " << RESET;
		cout << ORANGE1 << ":.|" << RESET << endl;
	}
	return ;
}

void	ft_command(void)
{
	cout << ORANGE1 << "|.:Enter a Command: " << RESET;
}

void	ft_exit(void)
{
	cout << ORANGE1 << "|.:        " << RESET;
	cout << ORANGE2 << "Exiting program" << RESET;
	cout << ORANGE1 << "         :.|" << endl;
	cout << "+====================================+" << RESET << endl;
}