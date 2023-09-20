/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:45:49 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/20 13:10:30 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void print_contact(Contact contact)
{
	std::cout << "First name: " << contact.First_name << std::endl;
	std::cout << "Last name: " << contact.Last_name << std::endl;
}

void print_text(std::string text, bool newline)
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

void add_contact(PhoneBook *phoneBook)
{
	std::string firstname;
	std::string lastname;
	while (firstname.empty())
	{
		std::cout << "Enter first name: ";
		std::cin >> firstname;
	}
	
	std::cout << "Enter last name: ";
	std::cin >> lastname;
	phoneBook->addContact(firstname , lastname);
}

void search_contact(PhoneBook *phoneBook)
{
	for(int i = 0; i < phoneBook->num_entries; i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i + 1 << "|";
		print_text(phoneBook->contacts[i].First_name, false);
		print_text(phoneBook->contacts[i].Last_name, true);
	}
	int index;
	std::cout << "Enter index: ";
	std::cin >> index;
	if (index > 0 && index <= phoneBook->num_entries)
		print_contact(phoneBook->contacts[index - 1]);
	else
		std::cout << "Invalid index" << std::endl;
}

int main(void)
{
	std::string command;
	PhoneBook phoneBook;

	while(1)
	{
		std::cout << "Type ADD to save a new contact, SEARCH to search for a contact or EXIT to exit the program" << std::endl;
		std::cout << "Enter command: ";
		std::cin >> command;
		if (command.compare("ADD") == 0)
			add_contact(&phoneBook);
		else if (command.compare("SEARCH") == 0)
			search_contact(&phoneBook);
		else if(command.compare("EXIT") == 0)
			break;
	}
	return (0);
}
