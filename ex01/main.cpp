../* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:13:34 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/23 16:43:47 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static void	ft_display(void)
{
	cout << ORANGE << "+====================================+" << endl;
	cout << "|       ┳┳┓    ┏┓                    |" << endl;
	cout << "|       ┃┃┃┓┏  ┣┫┓┏┏┏┓┏┏┓┏┳┓┏┓       |" << endl;
	cout << "|       ┛ ┗┗┫  ┛┗┗┻┛┗ ┛┗┛┛┗┗┗        |" << endl;
	cout << "|         ┏┓┓       ┳┓    ┓          |" << endl;
	cout << "|         ┃┃┣┓┏┓┏┓┏┓┣┫┏┓┏┓┃┏         |" << endl;
	cout << "|         ┣┛┛┗┗┛┛┗┗ ┻┛┗┛┗┛┛┗         |" << endl;
	cout << "+====================================+" << RESET << endl;
	
} 



// static void	ft_adduser(void)
// {
	
// }

// static void	ft_search(void)
// {

// }

// static void	ft_command(void)
// {
	
// }

int main(int argc, char **argv)
{
	// int	book[8];
		
	(void)argv;
	if (argc == 1)
	{
		ft_display();			
		// while (1)
		// {
		// 	if (cin == "ADD")
		// 		ft_adduser();
		// 	else if (cin == "SEARCH")
		// 		ft_search();
		// 	else if (cin == "EXIT")
		// 		return (0);
		// 	else
		// 		ft_command();	
		// }
	}
	else
		cout << "./PhoneBook to launch the PhoneBook" << endl;
	return (0);	
}