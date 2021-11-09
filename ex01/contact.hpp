#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {

public:

	void				set_info(int index, std::string content);
	std::string			get_info(int index) const;
	// std::string get_prompt(int index);
	static const int	content_num = 5;
	static const		std::string prompt_list[content_num];

	// Contact(void);
	// ~Contact(void); // 追加

private:

	std::string			_info[content_num];

};

#endif