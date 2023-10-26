/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:22:30 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/26 16:51:34 by phudyka          ###   ########.fr       */
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
# define BOLD		"\033[1m"
# define ORANGE1	"\033[38;5;208m"
# define ORANGE2	"\033[38;5;202m"
# define RED		"\033[1;31m"
# define PURPLE		"\033[1;35m"

using namespace std;

const string	num = "0123456789";

void	ft_awesome(void);
void	ft_command(void);
int		ft_name(string &first, string &last, string &nick);
int		ft_phone(string &phone);
int		ft_secret(string &secret);
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

	void displayDetails(void) const
	{
 	   cout << ORANGE1 << ".:" << RESET;
	   cout << ORANGE2 << BOLD << "First Name" << RESET;
	   cout << ORANGE1 << ": " << first << endl;
	   cout << ORANGE1 << ".:" << RESET;
	   cout << ORANGE2 << BOLD << "Last Name" << RESET;
	   cout << ORANGE1 << ": " << last << endl;
	   cout << ORANGE1 << ".:" << RESET;
	   cout << ORANGE2 << BOLD << "Nickname" << RESET;
	   cout << ORANGE1 << ": " << nick << endl;
	   cout << ORANGE1 << ".:" << RESET;
	   cout << ORANGE2 << BOLD << "Phone Number" << RESET;
	   cout << ORANGE1 << ": " << phone << endl;
	   cout << ".:" << BOLD << PURPLE << "*Darkest Secret*" << RESET << ": " << secret << endl;
	   cout << ".:" << RESET << endl;
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
		cout << ORANGE1 << "+============[";
		cout << BOLD << "SEARCHING" << RESET;
		cout << ORANGE1 << "]=============+" << endl;
		cout << "|:" << RESET;
		cout << ORANGE2 << BOLD << "...[ N° | FIRST | LAST | NICK ]..." << RESET;
		cout <<  ORANGE1 << ":" << "|" << RESET << endl;
        for (int i = 0; i < index; ++i)
			tab[i].displayBook(i);
		cout << ORANGE1 << "+____________________________________+" << RESET << endl;
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