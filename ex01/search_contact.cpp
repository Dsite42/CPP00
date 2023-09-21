/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:06:01 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/21 09:27:58 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static void print_text(std::string text, bool newline)
{
	if(text.length() > 10)
	{
		text.resize(9);
		text.append(".");
	}
	if(newline)
		std::cout << std::setfill(' ') << std::setw(10) << text << std::endl;
	else
		std::cout << std::setfill(' ') << std::setw(10) << text << "|";
}

static void print_column_titles(void)
{
	print_text("index", false);
	print_text("first name", false);
	print_text("last name", false);
	print_text("nick name", true);
}

static void print_phonebook_entries(PhoneBook *phoneBook)
{
	int i;

	for(i = 0; i < phoneBook->num_entries; i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i + 1 << "|";
		print_text(phoneBook->contacts[i].First_name, false);
		print_text(phoneBook->contacts[i].Last_name, false);
		print_text(phoneBook->contacts[i].Nick_name, true);
	}
}

static void print_contact(Contact contact)
{
	std::cout << std::endl << "first name: " << contact.First_name << std::endl;
	std::cout << "last name: " << contact.Last_name << std::endl;
	std::cout << "nick name: " << contact.Nick_name << std::endl;
	std::cout << "phone number: " << contact.Phone_number << std::endl;
	std::cout << "darkest secret: " << contact.Darkest_secret << std::endl;
}

void search_contact(PhoneBook *phoneBook)
{
	int index = 0;

	print_column_titles();
	print_phonebook_entries(phoneBook);
	std::cout << "Enter index: ";
	if (!(std::cin >> index))
	{
		std::cout << "Invalid index" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else if (index > 0 && index <= phoneBook->num_entries)
		print_contact(phoneBook->contacts[index - 1]);
	else
		std::cout << "Invalid index" << std::endl;	
}
