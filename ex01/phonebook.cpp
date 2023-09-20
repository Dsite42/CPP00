/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:47:42 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/20 13:24:01 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int search_oldest_entry(Contact contacts[MAX_CONTACTS])
{
	int oldest;
	oldest = 0;
	for(int i = 0; i < MAX_CONTACTS; i++)
	{
		if(contacts[i].Created < contacts[oldest].Created)
			oldest = i;
	}
	return (oldest);
}

PhoneBook::PhoneBook()
{
	num_entries = 0;
}

 void PhoneBook::addContact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret)
{
	if(num_entries < MAX_CONTACTS)
	{
		contacts[num_entries] = Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
		num_entries++;
	}
	else
		contacts[search_oldest_entry(contacts)] = Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
}
