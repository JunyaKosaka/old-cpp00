# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkosaka <jkosaka@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 09:26:51 by jkosaka           #+#    #+#              #
#    Updated: 2021/11/09 22:12:14 by jkosaka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = clang++
STD = -std=c++98
SRCS = megaphone.cpp

FLAGS = -Wall -Wextra -Werror 

$(NAME) : $(SRCS)
	$(CC) $(STD) $(FLAGS) $(SRCS) -o $(NAME)

all	: $(NAME)

clean :
	/bin/rm -rf $(OBJS)

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re