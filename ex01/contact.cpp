#include "contact.hpp"

void Contact::set_info(int index, std::string content) {
	this->info[index] = content;
}

std::string Contact::get_info(int index) {
	return this->info[index];
}