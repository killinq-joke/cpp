# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/08 16:34:01 by ztouzri           #+#    #+#              #
#    Updated: 2021/07/11 16:42:28 by ztouzri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= weapon
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.cpp HumanB.cpp Weapon.cpp HumanA.cpp
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
