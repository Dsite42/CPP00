/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:59:25 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/13 18:16:27 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void print_contact(Contact contact)
{
	std::cout << "First name: " << contact.First_name << std::endl;
	std::cout << "Last name: " << contact.Last_name << std::endl;
}
