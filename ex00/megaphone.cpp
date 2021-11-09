/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkosaka <jkosaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:26:36 by jkosaka           #+#    #+#             */
/*   Updated: 2021/11/09 21:49:16 by jkosaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void func(std::string *s) {
	for (size_t i = 0; i < (*s).size(); i++) {
		(*s)[i] = std::toupper((*s)[i]);
	}
}

int	main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		std::string s = argv[i];
		func(&s);
		std::cout << s;
	}
	std::cout << std::endl;
	return 0;
}
