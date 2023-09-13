
#ifndef CONTACT_H
# define CONTACT_H
# include <string>

class Contact
{
	private:

	public:
		std::string Last_name;
		std::string First_name;
		time_t Created;
		
		Contact()
		{
			First_name = "";
			Last_name = "";
			Created = time(&Created);
		}
		Contact(std::string first_name, std::string last_name)
		{
			First_name = first_name;
			Last_name = last_name;
			time(&Created);
		}
};

#endif