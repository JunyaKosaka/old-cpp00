#include "phonebook.hpp"

PhoneBook::PhoneBook() {
	this->_cur_index = 0;
}

void PhoneBook::start() {
	std::string command;

	while (1) {
		std::cout << "ADD, SEARCH or EXIT?: ";
		std::getline(std::cin, command, '\n');
		if (command == "ADD") {
			this->_add();
		} else if (command == "SEARCH") {
			this->_search();
		} else if (command == "EXIT") {
			std::cout << "CLOSED" << std::endl;
			break;
		} else {
			std::cout << "INVALID COMMAND" << std::endl;
		}
	}
}

void PhoneBook::_add() {
	std::string response;

	if (this->_cur_index == DATA_MAX) {
		this->_erase_old();
		this->_cur_index--;
	}
	for (int i = 0; i < Contact::content_num; i++) {
		std::cout << Contact::prompt_list[i] << ": ";
		std::getline(std::cin, response, '\n');
		this->_data[_cur_index].set_info(i, response);
	}
	if (this->_is_empty(this->_data[_cur_index])) {
		std::cout << "INVALID CONTACT:-C" << std::endl;
		return ;
	}
	std::cout << "ADDED CONTACT:)" << std::endl;
	this->_cur_index++;
}

void PhoneBook::_search() {
	std::string response;

	std::cout << "|     index|first name| last name|  nickname|\n";
	for (int i = 0; i < this->_cur_index; i++) {
		this->_show_contacts(i);
	}
	if (this->_cur_index == 0) return;
	while (1) {
		std::cout << "INPUT INDEX BETWEEN 0 AND " << this->_cur_index - 1 << ": ";
		std::getline(std::cin, response, '\n');
		if (response.size() != 1 || response < "0" || response > "9") {
			std::cout << "INVALID INDEX:(" << std::endl;
			continue;
		}
		char c = response[0];
		int num = 0 + (c - '0');
		if (0 <= num && num < this->_cur_index) {
			PhoneBook::_show_one(num);
			break;
		}
		std::cout << "INVALID INDEX:(" << std::endl;
	}
}

bool PhoneBook::_is_empty(Contact c) {
	bool is_empty = 1;
	for (int i = 0; i < Contact::content_num; i++) {
		if (c.get_info(i) != "") {
			is_empty = 0;
			break;
		}
	}
	return is_empty;
}

std::string PhoneBook::_trim_to_ten(std::string s) {
	int len = s.size();
	if (len > 10) {
		s[9] = '.';
		len = 10;
	}
	while (len < 10) {
		s = ' ' + s;
		len++;
	}
	s = s.substr(0, 10);
	return s;
}

void PhoneBook::_show_one(int i) {
	std::string s;

	for (int j = 0; j < Contact::content_num; j++) {
		s = this->_data[i].get_info(j);
		std::cout << Contact::prompt_list[j] << ": " << s << std::endl;
	}
}

void PhoneBook::_show_contacts(int i) {
	std::string s;
	std::cout << "|         " << i << "|";
	for (int j = 0; j < Contact::content_num - 2; j++) {
		s = this->_data[i].get_info(j);
		s = PhoneBook::_trim_to_ten(s);
		std::cout << s;
		std::cout << "|";
	}
	std::cout << std::endl;
}

void PhoneBook::_erase_old() {
	for (int i = 0; i < DATA_MAX - 1; i++) {
		this->_data[i] = this->_data[i+1];
	}
}
