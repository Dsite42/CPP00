/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:34:27 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/20 13:20:33 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	First_name = "";
	Last_name = "";
	Created = time(&Created);
}
	Contact::Contact(std::string first_name, std::string last_name, std::string nick_name,
		std::string phone_number, std::string darkest_secret)
{
	First_name = first_name;
	Last_name = last_name;
	Nick_name = nick_name;
	Phone_number = phone_number;
	Darkest_secret = darkest_secret;
	time(&Created);
}
