/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:48:54 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/30 17:19:05 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string	caps;

	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
			{
				for(int j = 0; argv[i][j]; j++)
				{
					caps = toupper(argv[i][j]);
					std::cout << caps;
				}
			}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}