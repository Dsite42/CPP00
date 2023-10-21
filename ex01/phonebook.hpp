/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:46:16 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/21 17:14:00 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <ctime>
# include "Contact.hpp"


# define MAX_CONTACTS 8

class PhoneBook
{
	private:

	public:
		int 	num_entries;
		Contact contacts[MAX_CONTACTS];
		// Constructors
		PhoneBook();
		~PhoneBook();

		// Member functions
		void addContact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret);
};

int		search_oldest_entrie(Contact contacts[MAX_CONTACTS]);
#endif
