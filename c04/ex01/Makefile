# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 10:33:35 by ztouzri           #+#    #+#              #
#    Updated: 2021/07/16 17:29:15 by ztouzri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= wow
CC		= clang++
CFLAGS	= -Wall -Werror -Wextra

SRCS	= main.cpp AWeapon.cpp Character.cpp Enemy.cpp PlasmaRifle.cpp PowerFist.cpp RadScorpion.cpp SuperMutant.cpp 
OBJS	= $(SRCS:cpp=o)

.PHONY: all clean fclean re
all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
