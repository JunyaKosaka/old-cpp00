#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <string>
# include <iostream>
# include "contact.hpp"
# define DATA_MAX 8

class PhoneBook {

public:

	PhoneBook();
	void start();


private:

	Contact		_data[DATA_MAX];
	int			_cur_index;
	void		_add();
	void		_search();
	bool		_is_empty(Contact c);
	std::string _trim_to_ten(std::string s);
	void		_show_contacts(int i);
	void		_erase_old();
	void		_show_one(int i);

};

#endif