# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/30 17:21:22 by ztouzri           #+#    #+#              #
#    Updated: 2021/06/30 17:54:59 by ztouzri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -g

SRCS	= megaphone.cpp
OBJS	= $(SRCS:cpp=o)

	
.PHONY: all
all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
