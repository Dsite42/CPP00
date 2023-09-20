/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:34:27 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/20 11:38:43 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	First_name = "";
	Last_name = "";
	Created = time(&Created);
}

Contact::Contact(std::string first_name, std::string last_name)
{
	First_name = first_name;
	Last_name = last_name;
	time(&Created);
}
