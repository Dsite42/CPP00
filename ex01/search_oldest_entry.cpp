/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_oldest_entry.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:27:38 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/13 18:29:27 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
