/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:48:54 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/23 13:10:17 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using namespace std;

int	main(int argc, char **argv)
{
	string	caps;

	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
			{
				for(int j = 0; argv[i][j]; j++)
				{
					caps = toupper(argv[i][j]);
					cout << caps;
				}
			}
		cout << endl;
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	return (0);
}