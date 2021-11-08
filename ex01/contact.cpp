#include "contact.hpp"

const std::string Contact::prompt_list[Contact::content_num] = {
	"first name", "last name", "nickname", \
	"phone number", "darkest secret"
};

void Contact::set_info(int index, std::string content) {
	this->_info[index] = content;
}

std::string Contact::get_info(int index) const {
	return this->_info[index];
}
