/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:22:30 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/26 18:41:32 by phudyka          ###   ########.fr       */
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

void displayBook(int index) const
{
    cout << ORANGE1 << "|" << RESET;
    cout << ORANGE2 << BOLD << setw(10) << right << index << RESET;
    cout << ORANGE1 << "|";
    cout << setw(10) << right << (first.length() > 9 ? first.substr(0, 9) + '.' : first) << "|";
    cout << setw(10) << right << (last.length() > 9 ? last.substr(0, 9) + '.' : last) << "|";
    cout << setw(10) << right << (nick.length() > 9 ? nick.substr(0, 9) + '.' : nick) << "|" << RESET << endl;
}


	void displayDetails(void) const
	{
		cout << ORANGE1 << "+=================[" << RESET;
		cout << BOLD << ORANGE2 << "DETAILS" << RESET;
		cout << ORANGE1"]=================+" << endl;
		cout << "|.:" << RESET;
		cout << ORANGE2 << BOLD << "First Name" << RESET;
		cout << ORANGE1 << ": " << RESET << first << endl;
		cout << ORANGE1 << "|.:" << RESET;
		cout << ORANGE2 << BOLD << "Last Name" << RESET;
		cout << ORANGE1 << ": " << RESET << last << endl;
		cout << ORANGE1 << "|.:" << RESET;
		cout << ORANGE2 << BOLD << "Nickname" << RESET;
		cout << ORANGE1 << ": " << RESET << nick << endl;
		cout << ORANGE1 << "|.:" << RESET;
		cout << ORANGE2 << BOLD << "Phone Number" << RESET;
		cout << ORANGE1 << ": " << RESET << phone << endl;
		cout << ORANGE1 << "|.:" << RESET;
		cout << PURPLE << BOLD << "*Darkest Secret*" << RESET << ": " << secret << endl;
		cout << ORANGE1 << "+___________________________________________+" << RESET << endl;
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
			tab[0] = newContact;
        }
    }

    void	displayTab() const
	{
		cout << ORANGE1 << "+===============[" << RESET;
		cout << ORANGE2 << BOLD << "SEARCHING" << RESET;
		cout << ORANGE1 << "]=================+" << endl;
		cout << "|:..";
		cout << ORANGE2 << BOLD << "INDEX"<< RESET;
		cout << ORANGE1 << "..|.." << RESET;
		cout << ORANGE2 << BOLD << "FIRSTn";
		cout << ORANGE1 << "..|..." << RESET;
		cout << ORANGE2 << BOLD << "LAST" << RESET;
		cout << ORANGE1 << "...|..." << RESET;
		cout << ORANGE2 << BOLD << "NICK" << RESET ;
		cout << ORANGE1 "..:|" << RESET << endl;
        for (int i = 0; i < index; ++i)
			tab[i].displayBook(i);
		cout << ORANGE1 << "+___________________________________________+" << RESET << endl;
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