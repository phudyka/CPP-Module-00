/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:22:30 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/26 12:05:51 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <sstream>
# include <algorithm>

# define RESET		"\033[0m"
# define ORANGE1	"\033[38;5;208m"
# define ORANGE2	"\033[38;5;202m"
# define RED		"\033[1;31m"
# define PURPLE		"\033[1;35m"

using namespace std;

void	ft_awesome(void);
void	ft_command(void);
void	ft_name(string first, string last, string nick);
void	ft_phone(string phone);
void	ft_secret(string secret);
void	ft_error(int code);
void	ft_exit(void);
class Contact
{
private:
	string	first;
	string	last;
	string	nick;
	string	phone;
	string	secret;
	
public:

	Contact() {}

	Contact(const string &firstInit, const string &lastInit,
		const string &nickInit, const string &phoneInit, const string &secretInit)
	: first(firstInit), last(lastInit), nick(nickInit), phone(phoneInit), secret(secretInit) {}

	void	displayBook(int index) const
	{
		cout << ORANGE1 << setw(10) << index << "|";
        cout << setw(10) << first.substr(0, 10) << "|";
        cout << setw(10) << last.substr(0, 10) << "|";
        cout << setw(10) << nick.substr(0, 10) << "|" << RESET << endl;
	}

	void	displayDetails(void) const
	{
        cout << ORANGE1 << ".:First Name: " << first << endl;
        cout << ".:Last Name: " << last << endl;
        cout << ".:Nickname: " << nick << endl;
		cout << ".:Phone Number: " << phone << endl;
        cout << ".:" << RESET;
		cout << PURPLE << "Darkest Secret" << RESET;
		cout << ORANGE1 << ": " << secret << RESET << endl;
    }
};

class PhoneBook
{
private:
    int		index;
    Contact	tab[8];

public:

    PhoneBook(void) : index(0) {}

    void	addContact(const Contact &newContact)
	{
		if (index < 8)
			tab[index++] = newContact;
		else
		{
			for (int i = 0; i < 7; ++i)
				tab[i] = tab[i + 1];
			tab[7] = newContact;
        }
    }

    void	displayTab() const
	{
		cout << ORANGE1 << "|:" << RESET;
		cout << ORANGE2 << "INDEX| FIRST | LAST | NICK " << RESET;
		cout <<  ORANGE1 << ":" << "|" << RESET << endl;
        for (int i = 0; i < index; ++i)
			tab[i].displayBook(i);
    }

    void	searchContact(int i) const
	{
		if (i >= 0 && i < index)
            tab[i].displayDetails();
        else
		{
            ft_error(2);
			return ;
		}
    }
};

#endif