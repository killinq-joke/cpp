# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 19:07:51 by ztouzri           #+#    #+#              #
#    Updated: 2021/07/12 19:26:02 by ztouzri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.cpp Fixed.cpp
OBJS	= $(SRCS:cpp=o)

.PHONY:	all clean fclean re
all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all