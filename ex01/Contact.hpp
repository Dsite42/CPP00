
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
		time_t Created;
		
		Contact();
		Contact(std::string first_name, std::string last_name);
};

#endif