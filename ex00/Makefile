# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 12:22:26 by lvarela           #+#    #+#              #
#    Updated: 2022/03/24 14:08:13 by lvarela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	:=	main.cpp
OBJS	:=	$(SRCS:.cpp=.o)
CC		:=	clang++
FLAGS	:=	-Wall -Werror -Wextra
RM		:=	rm -f
NAME	:=	megaphone

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean $(NAME)

.PHONY	:	all clean fclean re

