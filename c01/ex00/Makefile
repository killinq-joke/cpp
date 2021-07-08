# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/08 16:34:01 by ztouzri           #+#    #+#              #
#    Updated: 2021/07/08 17:04:01 by ztouzri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.cpp newZombie.cpp Zombie.cpp randomChump.cpp
OBJS	= $(SRCS:cpp=o)

%o: %cpp
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
