# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkosaka <jkosaka@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 09:26:51 by jkosaka           #+#    #+#              #
#    Updated: 2021/11/09 01:30:43 by jkosaka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = clang++
STD = -std=c++98
SRCS = main.cpp contact.cpp phonebook.cpp

FLAGS = -Wall -Wextra -Werror

$(NAME) :
	$(CC) $(STD) $(FLAGS) $(SRCS) -o $(NAME)

all	: $(NAME)

clean :
	/bin/rm -rf $(OBJS)

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re