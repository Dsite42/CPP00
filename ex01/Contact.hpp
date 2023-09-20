
#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <ctime>

class Contact
{
	private:

	public:
		std::string Last_name;
		std::string First_name;
		std::string Nick_name;
		std::string Phone_number;
		std::string Darkest_secret;
		time_t Created;
		
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret);
};

#endif