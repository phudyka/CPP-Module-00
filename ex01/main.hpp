/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:22:30 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/08 11:01:33 by phudyka          ###   ########.fr       */
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

const std::string	num = "0123456789";

void	ft_awesome(void);
void	ft_command(void);
int		ft_name(std::string &first, std::string &last, std::string &nick);
int		ft_phone(std::string &phone);
int		ft_secret(std::string &secret);
void	ft_error(int code);
void	ft_exit(void);
class Contact
{
	private:
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	phone;
		std::string	secret;
	
	public:

	Contact() {}

	Contact(const std::string &firstInit, const std::string &lastInit,
		const std::string &nickInit, const std::string &phoneInit, const std::string &secretInit)
	: first(firstInit), last(lastInit), nick(nickInit), phone(phoneInit), secret(secretInit) {}

void displayBook(int index) const
{
    std::cout << ORANGE1 << "|" << RESET;
    std::cout << ORANGE2 << BOLD << std::setw(10) << std::right << index << RESET;
    std::cout << ORANGE1 << "|";
  	std::cout << std::setw(10) << std::right << (first.length() > 9 ? first.substr(0, 9) + '.' : first) << "|";
    std::cout << std::setw(10) << std::right << (last.length() > 9 ? last.substr(0, 9) + '.' : last) << "|";
    std::cout << std::setw(10) << std::right << (nick.length() > 9 ? nick.substr(0, 9) + '.' : nick) << "|" << RESET << std::endl;
}

	void displayDetails(void) const
	{
		std::cout << ORANGE1 << "+=================[" << RESET;
		std::cout << BOLD << ORANGE2 << "DETAILS" << RESET;
		std::cout << ORANGE1"]=================+" << std::endl;
		std::cout << "|.:" << RESET;
		std::cout << ORANGE2 << BOLD << "First Name" << RESET;
		std::cout << ORANGE1 << ": " << RESET << first << std::endl;
		std::cout << ORANGE1 << "|.:" << RESET;
		std::cout << ORANGE2 << BOLD << "Last Name" << RESET;
		std::cout << ORANGE1 << ": " << RESET << last << std::endl;
		std::cout << ORANGE1 << "|.:" << RESET;
		std::cout << ORANGE2 << BOLD << "Nickname" << RESET;
		std::cout << ORANGE1 << ": " << RESET << nick << std::endl;
		std::cout << ORANGE1 << "|.:" << RESET;
		std::cout << ORANGE2 << BOLD << "Phone Number" << RESET;
		std::cout << ORANGE1 << ": " << RESET << phone << std::endl;
		std::cout << ORANGE1 << "|.:" << RESET;
		std::cout << PURPLE << BOLD << "*Darkest Secret*" << RESET << ": " << secret << std::endl;
		std::cout << ORANGE1 << "+___________________________________________+" << RESET << std::endl;
	}

};

class PhoneBook
{
	private:
		int		old;
	    int		index;
	    Contact	tab[8];

	public:

    PhoneBook(void) : old(0), index(0) {}

	void addContact(const Contact &newContact)
	{
        if (this->index < 8)
            tab[this->index++] = newContact;
        else
        {
            tab[old] = newContact;
            old = (old + 1) % 8;
        }
    }

    void	displayTab() const
	{
		std::cout << ORANGE1 << "+===============[" << RESET;
		std::cout << ORANGE2 << BOLD << "SEARCHING" << RESET;
		std::cout << ORANGE1 << "]=================+" << std::endl;
		std::cout << "|:..";
		std::cout << ORANGE2 << BOLD << "INDEX"<< RESET;
		std::cout << ORANGE1 << "..|.." << RESET;
		std::cout << ORANGE2 << BOLD << "FIRSTn";
		std::cout << ORANGE1 << "..|..." << RESET;
		std::cout << ORANGE2 << BOLD << "LAST" << RESET;
		std::cout << ORANGE1 << "...|..." << RESET;
		std::cout << ORANGE2 << BOLD << "NICK" << RESET ;
		std::cout << ORANGE1 "..:|" << RESET << std::endl;
        for (int i = 0; i < index; ++i)
			tab[i].displayBook(i);
		std::cout << ORANGE1 << "+___________________________________________+" << RESET << std::endl;
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