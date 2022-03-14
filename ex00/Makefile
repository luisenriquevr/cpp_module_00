# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 12:22:26 by lvarela           #+#    #+#              #
#    Updated: 2022/03/14 16:24:12 by lvarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	:=	$(wildcard *.cpp)
OBJECTS :=	$(subst .cpp,.o,$(SOURCES))
CC		:=	clang++
FLAGS	:=	-Wall -Werror -Wextra
NAME	:=	megaphone

all		:	$(NAME)

$(NAME) :	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

$(%.o)	:	$(%.c)
			$(CC) -c $^ -o $@

clean	:
			rm $(OBJECTS)

fclean	:	clean
			rm $(NAME)

re		:	fclean all

.PHONY	:	all $(NAME) clean fclean re

