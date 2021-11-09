#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <string>
# include <iostream>
# include <iomanip>
# include "contact.hpp"
# define DATA_MAX 8

class PhoneBook {

public:

	PhoneBook();
	void start();


private:

	Contact		_data[DATA_MAX];
	int			_cur_index;  // 次入ったら入るindex 8の時に入ったら0を削除
	void		_add();
	void		_search();
	bool		_is_empty(Contact c);
	std::string _trim_to_ten(std::string s);
	void		_show_contact(int i);
	void		_erase_old();

};

#endif