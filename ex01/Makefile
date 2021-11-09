NAME = a.out
CC = clang++
STD = -std=c++98
SRCS = main.cpp contact.cpp phonebook.cpp

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