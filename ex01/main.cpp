/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:45:49 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/20 15:09:19 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "main.hpp"

void print_contact(Contact contact)
{
	std::cout << std::endl << "first name: " << contact.First_name << std::endl;
	std::cout << "last name: " << contact.Last_name << std::endl;
	std::cout << "nick name: " << contact.Nick_name << std::endl;
	std::cout << "phone number: " << contact.Phone_number << std::endl;
	std::cout << "darkest secret: " << contact.Darkest_secret << std::endl;
}

void add_contact(PhoneBook *phoneBook)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter first name: ";
	std::cin >> first_name;
	std::cout << "Enter last name: ";
	std::cin >> last_name;
	std::cout << "Enter nick name: ";
	std::cin >> nick_name;
	std::cout << "Enter phone number: ";
	std::cin >> phone_number;
	std::cout << "Enter darkest secret: ";
	std::cin >> darkest_secret;
	phoneBook->addContact(first_name , last_name, nick_name, phone_number, darkest_secret);
}

int main(void)
{
	std::string command;
	PhoneBook phoneBook;

	while(1)
	{
		std::cout << std::endl << "Type ADD to save a new contact, SEARCH to search for a contact or EXIT to exit the program" << std::endl;
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
