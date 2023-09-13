
#include "phonebook.hpp"

int search_oldest_entrie(Contact contacts[MAX_CONTACTS])
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

class PhoneBook
{
	private:
	public:
		int num_entries;
		PhoneBook()
		{
			num_entries = 0;
		}
		Contact contacts[MAX_CONTACTS];
		void addContact(std::string firstname, std::string lastname)
		{
			if(num_entries < MAX_CONTACTS)
			{
				contacts[num_entries] = (Contact(firstname, lastname));
				num_entries++;
			}
			else
				contacts[search_oldest_entrie(contacts)] = (Contact(firstname, lastname));
		}
};

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
			phoneBook.addContact(firstname , lastname);
		}
		else if (command.compare("SEARCH") == 0)
		{
			for(int i = 0; i < phoneBook.num_entries; i++)
			{
				std::cout << std::setfill(' ') << std::setw(10) << i + 1 << "|";
				print_text(phoneBook.contacts[i].First_name, false);
				print_text(phoneBook.contacts[i].Last_name, true);
			}
			int index;
			std::cout << "Enter index: ";
			std::cin >> index;
			if (index > 0 && index <= phoneBook.num_entries)
				print_contact(phoneBook.contacts[index - 1]);
			else
				std::cout << "Invalid index" << std::endl;
		}
		else if(command.compare("EXIT") == 0)
			break;

	}
	return (0);
}
