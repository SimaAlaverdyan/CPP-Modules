#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>

class	Contact
{
	private:
			std::string	_firstname;
			std::string _lastname;
			std::string _nickname;
			std::string _number;
			std::string _secret;
	public:
			const std::string	&get_firstname() const;
			const std::string	&get_lastname() const;
			const std::string	&get_nickname() const;
			const std::string	&get_number() const;
			const std::string	&get_secret() const;
			void				set_firstname(std::string firstname);
			void				set_lastname(std::string lastname);
			void				set_nickname(std::string nickname);
			void				set_number(std::string number);
			void				set_secret(std::string secret);
};

#endif
