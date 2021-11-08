/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkosaka <jkosaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:26:36 by jkosaka           #+#    #+#             */
/*   Updated: 2021/11/08 17:09:14 by jkosaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void func(std::string *s) {
	for (int i = 0; i < int((*s).size()); i++) {
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
		if (i < argc - 1) std::cout << ' ';
		if (i == argc - 1) std::cout << std::endl;
	}
}
