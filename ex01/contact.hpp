#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
public:
	void set_info(int index, std::string content);
	std::string get_info(int index);

private:
	const int content_num = 5;
	const std::string prompt_list[content_num] = {
		"first name", "last name", "nickname", \
		"phone number", "darkest secret"
	};
	std::string info[content_num];
}

#endif