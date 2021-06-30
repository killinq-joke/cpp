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
CFLAGS	= -Wall -Wextra -Werror

SRCS	= megaphone.cpp
OBJS	= $(SRCS:c=o)

%.o: %.c
	$(CC) $(CFLAGS) -c $<
	
.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

