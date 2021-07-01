NAME	= contact2000
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.cpp
OBJS	= $(SRCS:cpp=o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

.PHONY: all clean fclean re
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
