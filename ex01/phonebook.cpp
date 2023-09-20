/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:47:42 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/20 12:57:03 by cgodecke         ###   ########.fr       */
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

 void PhoneBook::addContact(std::string firstname, std::string lastname)
{
	if(num_entries < MAX_CONTACTS)
	{
		contacts[num_entries] = Contact(firstname, lastname);
		num_entries++;
	}
	else
		contacts[search_oldest_entry(contacts)] = Contact(firstname, lastname);
}
