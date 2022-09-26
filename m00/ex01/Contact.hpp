#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
	public:
		Contact();
		Contact(std::string ln, std::string fn, std::string nn, std::string ds, std::string p);
		std::string lastName;
		std::string firstName;
		std::string nickname;
		std::string darkestSecret;
		std::string phone;
		~Contact();
};

#endif