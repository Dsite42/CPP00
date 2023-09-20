/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:46:16 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/20 12:39:07 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <ctime>
# include "Contact.hpp"


# define MAX_CONTACTS 1

class PhoneBook
{
	private:
	public:
		int num_entries;
		PhoneBook();
		Contact contacts[MAX_CONTACTS];
		void addContact(std::string firstname, std::string lastname);
};

void	print_text(std::string text, bool newline);
int		search_oldest_entrie(Contact contacts[MAX_CONTACTS]);
void	print_contact(Contact contact);
#endif